#include <iostream>
using namespace std;
int main()
{
	{
		int a=3;
		int b = ++a;
		cout << "left increment: \n";
		cout << "a=" << a << "\t b=" << b << endl;
	}
	int a = 20;
	int c = a++;
	cout << "right increment: \n";
	cout << "a=" << a << "\t c=" << c << endl;
	return 0;
}
