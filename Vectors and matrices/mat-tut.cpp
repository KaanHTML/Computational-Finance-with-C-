#include <iostream>
using namespace std;
int main()
{
	const int m=3, n=2;
	float mat[m][n] = {{1, 2}, {3, 4}, {5, 6}};
	// Sum of squares on the diagonal
	int dim = (m < n) ? m : n;
	float sum = 0;
	for (int i=0; i<dim; ++i)
		sum += mat[i][i] * mat[i][i];
	cout << "Sum of squares on the diagonal: " << sum << endl;
	float min = mat[0][0];
	for (int i=0; i<m; ++i)
		for (int j=0; j<n; ++j)
			if (min > mat[i][j])
				min = mat[i][j];
	cout << "Min element: " << min << endl;
}