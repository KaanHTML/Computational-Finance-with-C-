#include "BinModel.h"
#include "Options01.h"
#include <iostream>
using namespace std;


int main()
{
	BinModel Model;
	Model.GetInput();
	double k;
	int n;
	GetInput(k,n);
	cout << "The call option price is: " << PriceByCRR(Model, n, k, CallPayoff) << endl; 
	cout << "The put option price is: " << PriceByCRR(Model, n, k, PutPayoff) << endl; 
	/* code */
	return 0;
}
