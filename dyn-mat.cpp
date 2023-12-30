#include <iostream>
using namespace std;
int main()
{
	int m=5, n=3;
	double** mat;
	cout << mat << endl;
	mat = new double*[m];
	for (int i=0; i<m; i++)
	{
		mat[i] = new double[n];
		for (int j=0; j<n; ++j)
			mat[i][j] = (i+j)/2.0;
	}
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
			cout << mat[i][j] << "\t";
		cout << endl;
	}
	for (int i=0; i<m; i++)
		delete[] mat[i];
	delete[] mat;
	mat = nullptr;
	return 0;
}