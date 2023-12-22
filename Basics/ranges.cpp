#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x;
	cout << "Enter x: ";
	cin >> x;
	float y = exp(1/x) + log(2*x);
	if (0.001 <= y and y <= 0.01 or y >= 100)
		cout << y << " is in range";
	else
		cout << y << " is not in range";
	return 0;
}