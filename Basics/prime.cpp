#include <iostream>
using namespace std;
int main()
{
	int n;
	do {
		cout << "Enter an integer: ";
		cin >> n;
	} while (n < 2);
	bool is_prime = true;
	for (int i=2; i<=n/2; i++)
	{
		if (n % i == 0)
		{
			is_prime = false;
			break;
		}
	}
	cout << n << " is" << ((is_prime) ? "" : " not")
		<< " prime\n";
	return 0;
}