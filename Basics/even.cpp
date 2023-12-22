#include <iostream>
using namespace std;
int main()
{
	cout << "Enter an integer: ";
	int num;
	cin >> num;
	if (num % 2 == 0)
	{
		cout << num << " is even";
		cout << "test";
	}
	else
	{
		cout << num << " is odd";
		cout << "FAIL";
	}

	return 0;
}