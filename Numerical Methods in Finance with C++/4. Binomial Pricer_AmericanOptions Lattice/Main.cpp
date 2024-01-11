#include "BinModel.h"
#include "BinLattice.h"
#include "Options01.h"
#include <iostream>
using namespace std;


int main()
{
	BinModel Model;
	Model.GetInput();

	Put Option;
	Option.GetInput();
	BinLattice<double> PriceTree;
	BinLattice<bool> StoppingTree;
	Option.PriceBySnell(Model, PriceTree, StoppingTree);
	cout << "American Put prices: " << endl << endl;
	PriceTree.Display();
	cout << "American put exercie policy: "
		 << endl << endl;
	StoppingTree.Display();
	return 0;
}
