#include <iostream>
using namespace std;

const int n = 2;

void print(float matrix[][n], int m, int n)
{
	
}

int main()
{
	float matrix[3][n] = {{1, 2}, {3, 4}, {5, 6}};
	cout << matrix[0][0] << endl;
	for (int i=0; i<3; ++i)
	{
		for (int j=0; j<2; ++j)
			cout << matrix[i][j] << "\t";
		cout << endl;
	}
	print(matrix, 3, 2);
	float m2[3][n];
	//m2 = matrix;
	for (int i=0; i<3; ++i)
		for (int j=0; j<2; ++j)
			m2[i][j] = matrix[i][j];

	return 0;
}