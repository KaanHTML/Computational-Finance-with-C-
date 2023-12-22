#include <iostream>
#include <cmath>
using namespace std;

float cdf(float);



int main()
{
	/* code */
	cout << "Input a number x, for which you want to calculate the CDF: " << endl;
	float x;
	cin >> x;
	cout << cdf(x) << endl;
	return 0;
}

float cdf(float x) 
{
	if (x <= 0) 
		return(-x);
	const float a1 = 0.319381530, a2 = 0.356563782, 
				a3 = 1.781477937, a4 = 1.821255978, a5 = 1.330274429;
	float t = 1/(1+0.2316419*x);
	float normaldistr = 1/sqrt(2*M_PI)*exp(-0.5*x*x);
	float last_term = a1*t + a2*t*t + a3*pow(t,3) + a4*pow(t,4) + a5*pow(t,5);
	return (1 - normaldistr*last_term);
}
