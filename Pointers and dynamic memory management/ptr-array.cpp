#include <iostream>
using namespace std;
int main()
{
	float array[] = {1, 2, 3};
	cout << array << endl;
	float* ptr = array;
	cout << *ptr << endl;
	cout << *(array+1) << endl;
	cout << ptr[2] << endl;
	//array = ptr;
	
	return 0;
}