#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void print(vector<T> vec)
{
	for (int i=0; i<vec.size(); ++i)
		cout << vec[i] << "\t";
	cout << endl;
}

int main()
{
	vector<double> vec1;
	//cout << vec1[0];
	vector<float> vec2 = {1, 1, 0};
	vector<float> vec3(4, 10);
	print(vec3);
	int arr[3] = {0, 0, 7};
	vector<int> vec4(arr, arr+3);
	print(vec4);
	
	return 0;
}