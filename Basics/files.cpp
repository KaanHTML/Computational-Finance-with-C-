#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	ofstream out;
	out.open("table.xls", ios::out);
	for(int i=0; i<=10; ++i)
		out << i << "\t" << i*i << endl;
	out.close();
	fstream in;
	in.open("table.xls", ios::in);
	int k, ksqr;
	while (in >> k >> ksqr)
		cout << k << "\t" << ksqr << endl;
	in.close();
	out.open("table.xls", ios::app);
	out << 11 << "\t" << 121 << endl;
	out.close();
	return 0;
}