#include <iostream>
using namespace std;

void test(int* ptr)
{
	*ptr = 25;
}

int main()
{
	int* ptr;
	int var = 5;
	cout << &var << "\t" << var << endl;
	ptr = &var;
	cout << ptr << "\t" << *ptr << endl;
	test(&var);
	cout << "new values:\n";
	cout << &var << "\t" << var << endl;
	cout << "new ptr values:\n";
	cout << ptr << "\t" << *ptr << endl;
	cout << &ptr << endl;
	
	return 0;
}