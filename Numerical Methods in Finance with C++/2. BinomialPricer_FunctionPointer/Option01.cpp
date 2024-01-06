#include "BinModel.h"
#include "Options01.h"
#include <iostream>
#include <cmath>
using namespace std;

void GetInput(double &k, int &n)
{
	cout << "Enter a k: "; cin >> k;
	cout << "Enter a n: "; cin >> n;
}

double PriceByCRR(double S0, double U, double D,
                  double R, int N, double K, double (*Payoff)(double z, double k))
{
	double q = RiskNeutProb(U, D, R);	
	double Price[N+1]; 
	for (int i = 0; i <= N; i++)
	{
		*(Price+i) = Payoff(S(S0, U, D, N, i), K); //arrays are nothing else than pointers, so could use pointers
	}
	for (int n = N-1; n >=0; n--)
	{
		for (int i = 0; i <= n; i++)
		{
			*(Price+i) = (q*(*(Price+i+1))+(1-q)*(*(Price+i)))/(1+R);

		}
	}
	return Price[0];
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



