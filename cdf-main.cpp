#include <iostream>
#include <fstream>
#include <cmath>
#include "cdf.h"
using namespace std;

int main()
{
	/* code */
	float input;
	cout << "Please enter a stock price: ";
	cin >> input;
	cout << "The price of a european call option according to Black SCholes is: " << bs(input) << endl;
	return 0;
}

