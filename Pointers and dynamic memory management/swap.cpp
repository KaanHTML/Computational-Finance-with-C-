#include <iostream>
using namespace std;

void swap(float* array, int i, int j)
{
	float temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}


void print(float array[], int size)
{
	for (int i = 0; i < size; i++)
		cout << array[i] << "\t";
		cout << endl;
}


int main(int argc, char const *argv[])
{
	/* code */
	const int size = 7;
	float array[size] = {1,5,6,2,1,3};
	print(array, size);
	
	bool running = true;
	while (running == true)
	{
		for (int i = 0; i < size - 1; ++i)
		{
			if (array[i] > array[i+1])
			{
				swap(array, i, i+1);
				running = true;
				break;
			}
			else
				running = false;
		}			
	}

	print(array, size);
	return 0;
}