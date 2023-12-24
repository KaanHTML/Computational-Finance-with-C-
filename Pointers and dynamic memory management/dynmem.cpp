#include <iostream>
using namespace std;
int main()
{
	int* ptr;
	ptr = new int;
	cout << ptr << "\t" << *ptr << endl;
	*ptr = 10;
	cout << ptr << "\t" << *ptr << endl;
	delete ptr;
	cout << ptr << "\t" << *ptr << endl;
	ptr = nullptr;
	cout << ptr << "\t" << *ptr << endl;
	
	return 0;
}