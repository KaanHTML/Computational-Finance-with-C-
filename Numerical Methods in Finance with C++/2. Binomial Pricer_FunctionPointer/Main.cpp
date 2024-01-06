#include "BinModel.h"
#include "Options01.h"
#include <iostream>
using namespace std;


int main()
{
	double S0, U, D, R;
	GetInput(S0, U, D, R);
	double k;
	int n;
	GetInput(k,n);
	cout << "The call option price is: " << PriceByCRR(S0, U, D, R, n, k, CallPayoff) << endl; 
	cout << "The put option price is: " << PriceByCRR(S0, U, D, R, n, k, PutPayoff) << endl; 
	/* code */
	return 0;
}
