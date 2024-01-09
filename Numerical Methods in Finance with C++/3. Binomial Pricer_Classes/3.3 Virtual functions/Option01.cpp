#include "BinModel.h"
#include "Options01.h"
#include <iostream>
#include <cmath>
using namespace std;


double EurOption::PriceByCRR(BinModel Model, double K)
{
	double q = Model.RiskNeutProb();	
	double Price[N+1]; 
	for (int i = 0; i <= N; i++)
	{
		*(Price+i) = Payoff(Model.S(N, i), K); //arrays are nothing else than pointers, so could use pointers
	}
	for (int n = N-1; n >=0; n--)
	{
		for (int i = 0; i <= n; i++)
		{
			*(Price+i) = (q*(*(Price+i+1))+(1-q)*(*(Price+i)))/(1+Model.GetR());

		}
	}
	return Price[0];
}

int Call::GetInput()
{
	cout << "Enter a k: "; cin >> K;
	int N;
	cout << "Enter a n: "; cin >> N;
	SetN(N);
	return 0;
}

int Put::GetInput()
{
	cout << "Enter a k: "; cin >> K;
	int N;
	cout << "Enter a n: "; cin >> N;
	SetN(N);
	return 0;
}

double CallPayoff(double z, double k)
{
	if(z>k) return z-k;
	return 0.0;
}

double PutPayoff(double z, double k)
{
	if(z<k) return k-z;
	return 0.0;
}



