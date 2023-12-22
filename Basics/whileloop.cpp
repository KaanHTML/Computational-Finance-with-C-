#include <iostream>
using namespace std;
int main()
{
	int n=10;
	int sum=0;
	int i=0;
	while (i<=n)
	{
		sum += i*i;
		i++;
	}
	cout << sum;
	return 0;
}