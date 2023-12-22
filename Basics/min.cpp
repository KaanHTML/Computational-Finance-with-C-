#include <iostream>
using namespace std;
int main()
{
	cout << "Enter two numbers: ";
	double x, y, min;
	cin >> x >> y;
	min = (x < y) ? x : y;
	cout << min;
	return 0;
}