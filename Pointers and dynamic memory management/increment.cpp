#include <iostream>
using namespace std;
int main()
{
	int var = 10;
	int var2 = 80;
	cout << &var2 << endl;
	//float* ptr = &var;
	int* ptr = &var;
	cout << "init: " << ptr << '\t' << *ptr << endl;
	(*ptr)++;
	cout << "incr value: " << ptr << '\t' << *ptr << endl;
	*ptr++;
	cout << "incr address: " << ptr << '\t' << *ptr << endl;
	*ptr = 25;
	cout << var << endl;
	*(&var-1) = 66;
	cout << var2 << endl;
	
	
	return 0;
}