#include "BinModel.h"
#include "Options01.h"
#include "BinLattice.h"
#include <iostream>
#include <cmath>
using namespace std;


double EurOption::PriceByCRR(BinModel Model,
	BinLattice<double>& PriceTree1,
			BinLattice<double>& xVal,
			BinLattice<double>& yVal)
{
	double q = Model.RiskNeutProb();	
	int N=GetN();
	PriceTree1.SetN(N);
	xVal.SetN(N);
	yVal.SetN(N);
	double ContVal;
	double OptionValue;
   	double XPosition, YPosition;
	for (int i = 0; i <= N; i++)
	{
		PriceTree1.SetNode(N,i,Payoff(Model.S(N, i))); //arrays are nothing else than pointers, so could use pointers
	}
	for (int n = N-1; n > 0; n--)
	{
		for (int i = 0; i <= n; i++)
		{
			/*
			xVal.SetNode(n, i, 
				(PriceTree1.GetNode(n+1, i+1)
					-PriceTree1.GetNode(n+1, i))
						/ (Model.S(n+1, i+1) - Model.S(n+1, i)));

			yVal.SetNode(n, i,
			 	(Payoff(Model.S(n, i)) - xVal.GetNode(n,i)*Model.S(n,i)) 
			 	/ pow((1+Model.GetR()), n));

			PriceTree1.SetNode(n,i, 
				Model.S(n, i) * xVal.GetNode(n,i) 
					+ yVal.GetNode(n,i));

			*/

			OptionValue=(q*PriceTree1.GetNode(n+1,i+1)
            	+(1-q)*PriceTree1.GetNode(n+1,i))
            	/(1+Model.GetR());
         	XPosition=(PriceTree1.GetNode(n+1,i+1)-PriceTree1.GetNode(n+1,i))
            	/(Model.S(n+1,i+1)-Model.S(n+1,i));
         	YPosition=(OptionValue-XPosition*Model.S(n,i))
           		/(pow(1+Model.GetR(),n));
         	PriceTree1.SetNode(n,i,OptionValue);
         	xVal.SetNode(n,i,XPosition);
         	yVal.SetNode(n,i,YPosition);


		}
	}
	return PriceTree1.GetNode(0,0);
}

double AmOption::PriceBySnell(BinModel Model,
			BinLattice<double>& PriceTree,
			BinLattice<bool>& StoppingTree)
{
	double q = Model.RiskNeutProb();	
	int N=GetN();
	PriceTree.SetN(N);
	StoppingTree.SetN(N);
	double ContVal;
	for (int i = 0; i <= N; i++)
	{
		PriceTree.SetNode(N,i,Payoff(Model.S(N, i))); // 0 if option should not be exercised and 1 if it should
		StoppingTree.SetNode(N,i,1);
	}
	for (int n = N-1; n >=0; n--)
	{
		for (int i = 0; i <= n; i++)
		{
			ContVal = (q*PriceTree.GetNode(n+1, i+1) 
				+ (1-q)*PriceTree.GetNode(n+1,i))
				/(1+Model.GetR());;
			PriceTree.SetNode(n,i,Payoff(Model.S(n, i)));
			StoppingTree.SetNode(n,i,1);
			if(ContVal > PriceTree.GetNode(n,i))
			{
				PriceTree.SetNode(n,i,ContVal);
				StoppingTree.SetNode(n,i,0); // no exercise of the option
			}
			else if (PriceTree.GetNode(n,i) == 0.0)
			{
				StoppingTree.SetNode(n,i,0);
			}
		}
	}
	return PriceTree.GetNode(0,0);
}

int Call::GetInput()
{
	cout << "Enter a K: "; cin >> K;
	int N;
	cout << "Enter a N: "; cin >> N;
	SetN(N);
	return 0;
}

double Call::Payoff(double z) 
{
	if(z>K) return z-K;
	return 0.0;
}

int Put::GetInput()
{
	cout << "Enter a K: "; cin >> K;
	int N;
	cout << "Enter a N: "; cin >> N;
	SetN(N);
	return 0;
}

double Put::Payoff(double z) 
{
	if(z<K) return K-z;
	return 0.0;
}


