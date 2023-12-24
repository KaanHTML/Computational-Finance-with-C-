#include <iostream>
using namespace std;

void swap(float* arr, int i, int j)
{
	float temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void print(float* arr, int size)
{
	for (int i=0; i<size; ++i)
		cout << arr[i] << '\t';
	cout << endl;
}

void sort(float* arr, int size)
{
	bool sorted = false;
	while (not sorted)
	{
		sorted = true;
		for (int i=0; i<size-1; ++i)
			if (arr[i] > arr[i+1])
			{
				swap(arr, i, i+1);
				sorted = false;
			}
	}
}


int main()
{
	float array[] = {2, 4, 1, 0};
	swap(array, 0, 3);
	print(array, 4);
	sort(array, 4);
	print(array, 4);
	return 0;
}