#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float* arr;
	int size = 10;
	arr = new float[size];
	for (int i=0; i<size; ++i)
	{
		arr[i] = sqrt(i);
		cout << arr[i] << "\t";
	}
	delete[] arr;
	arr = nullptr;
	
	return 0;
}