#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	cout << setiosflags(ios::left); // from iomanip
	cout.precision(4);
	cout.setf(ios::fixed);
	for (int i=100; i<=110; i++)
	{
		cout.width(10);
		cout << i << sqrt(i) << endl;
	}
	return 0;
}