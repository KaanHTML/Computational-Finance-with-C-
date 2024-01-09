#include "BinModel.h"
#include <iostream>
#include <cmath>
using namespace std;


void BinModel::GetInput(){
	cout << "Enter S0: "; cin >> S0;
	cout << "Enter U: "; cin >> U;
	cout << "Enter D: "; cin >> D;
	cout << "Enter R: "; cin >> R;
}

//computing risk-neutral probability
double BinModel::RiskNeutProb()
{
	return (R-D)/(U-D);
}

//computing the stock price at node n,i
double BinModel::S(int n, int i)
{
	return S0*pow(1+U, i)*pow(1+D, n-i);
}

