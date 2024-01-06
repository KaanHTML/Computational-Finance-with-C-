#include "BinModel.h"
#include <iostream>
#include <cmath>
using namespace std;


void GetInput(double &S0, double &U, double &D, double &R){
	cout << "Enter S0: "; cin >> S0;
	cout << "Enter U: "; cin >> U;
	cout << "Enter D: "; cin >> D;
	cout << "Enter R: "; cin >> R;
}


//computing risk-neutral probability
double RiskNeutProb(double U, double D, double R)
{
	return (R-D)/(U-D);
}

//computing the stock price at node n,i
double S(double S0, double U, double D, int n, int i)
{
	return S0*pow(1+U, i)*pow(1+D, n-i);
}