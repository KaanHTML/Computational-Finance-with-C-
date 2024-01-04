#include <iostream>
using namespace std;



int &squareRef(int &num1);
int *squarePtr(int *num2);

int main(int argc, char const *argv[])
{
	/* code */
	int a = 10, b = 20;
	cout << "Square Ref: " << endl;
	cout << squareRef(a) << "\t" << a << endl;
	int &ref = squareRef(a);
	cout << "Second sqare of a should be 10000: " << ref << endl;
	cout << "Square Ptr: " << endl;
	int * ptr;
	ptr = squarePtr(&b);
	cout << *ptr << "\t" << b << endl;
	return 0;
}

// with reference
int &squareRef(int& num1) {
	cout << "In squareRef(): " << &num1 << endl; 
	num1 *= num1;
	return num1;
} 

// function as a pointer

int *squarePtr(int *num2) {
	cout << "In squarePtr(): " << *num2 << endl; // 20
	*num2 *= *num2;
	return num2;  
}