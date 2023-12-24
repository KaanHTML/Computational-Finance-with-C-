#include <iostream>
using namespace std;
int main()
{
	int var = 10;
	double var2 = 2;
	cout << &var << "\t" << &var2 << endl;
	*(&var-2) = 101;
	cout << var2 << endl;
	
	return 0;
}