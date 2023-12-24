#include <iostream>
using namespace std;

void test(float* ptr)
{
	*ptr = 5;
}

int main()
{
	float var = 10;
	test(&var);
	cout << var << endl;
	return 0;
}