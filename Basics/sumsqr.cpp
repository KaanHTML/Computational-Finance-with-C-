#include <iostream>
using namespace std;
int main()
{
	int n=10;
	int sum=0;
	for (int i=0; i<=n; i++)
	{
		sum += (i%2 == 0) ? 0 : i*i;
	}
	cout << sum;
	return 0;
}