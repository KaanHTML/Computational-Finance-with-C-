#include <iostream>
using namespace std;
int main()
{
	int n=10;
	for (int i=1; i<=n; i++)
	{
		if (i % 4 == 0)
			break;//continue;
		cout << i << "\t";
	}
	return 0;
}