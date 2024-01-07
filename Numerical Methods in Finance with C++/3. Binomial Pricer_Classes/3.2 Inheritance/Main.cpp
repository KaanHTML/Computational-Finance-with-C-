#include "BinModel.h"
#include "Options01.h"
#include <iostream>
using namespace std;


int main()
{
	BinModel Model;
	Model.GetInput();

	Call Option1;
	Option1.GetInput();
	cout << "The call option price is: " << Option1.PriceByCRR(Model, Option1.GetK()) << endl; 
	//Put Option
	Put Option2;
	Option2.GetInput();
	cout << "The put option price is: " << Option2.PriceByCRR(Model, Option2.GetK()) << endl; 
	/* code */
	return 0;
}
