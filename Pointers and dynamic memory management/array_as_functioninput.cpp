#include <iostream>
using namespace std;

void callarray(int *array, int sizearray);

int main(int argc, char const *argv[])
{
	/* code */
	int array[] = {1,4,5};
	callarray(array, sizeof(array)/sizeof(int));
	return 0;
}


void callarray(int *array, int sizearray) {
	for (int i = 0; i < sizearray; ++i)
		cout << array[i] << "\t";
}