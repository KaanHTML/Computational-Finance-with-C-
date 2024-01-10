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
	cout << "The call European option price is: " << Option1.PriceByCRR(Model) << endl; 
	cout << "The call American option price is: " << Option1.PriceBySnell(Model) << endl;
	//Put Option
	Put Option2;
	Option2.GetInput();
	cout << "The put European option price is: " << Option2.PriceByCRR(Model) << endl; 
	cout << "The put American option price is: " << Option2.PriceBySnell(Model) << endl; 
	/* code */
	return 0;
}
