#include <iostream>
using namespace std;

int factorial(int &num)
{
	int prod = 1;
	while (num >= 2)
	{
		prod *= num;
		num--;
	}
	cout << "inside: " << num << endl;
	return prod;
}

int main()
{
	cout << "Enter an integer: ";
	int num;
	cin >> num;
	cout << factorial(num) << endl;
	cout << "outside: " << num << endl;
	return 0;
}