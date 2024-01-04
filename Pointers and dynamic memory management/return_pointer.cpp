#include <iostream>
using namespace std;

void byValue(int a, int b);
void byPointer(int*a, int *b);
void byReference(int &a, int &b);

int main(int argc, char const *argv[])
{
	int var1 = 5, var2 = 6;
	byValue(var1, var2);
	byPointer(&var1, &var2);
	byReference(var1, var2);
	return 0;
}

// Pass-by-Value
void byValue(int a, int b) {
	cout << "Pass by value: " << a * b << endl;
}
// Pass-by-Reference with Pointer Arguments
void byPointer(int *a, int *b) {
	cout << "Pass by pointer: " << (*a) * (*b) << endl;
}
//Pass-by-Reference with Reference Arguments
void byReference(int &a, int &b) {
	cout << "Pass by reference: " << a * b << endl;
}
