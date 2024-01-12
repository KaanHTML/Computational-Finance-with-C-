#include "BinModel.h"
#include "BinLattice.h"
#include "Options01.h"
#include <iostream>
using namespace std;


int main()
{
	BinModel Model;
	Model.GetInput();
	//European Call Option
   	Put Option;
   	Option.GetInput();
   	BinLattice<double> PriceTree;
   	BinLattice<double> XTree;
   	BinLattice<double> YTree;
   	Option.PriceByCRR(Model,PriceTree,XTree,YTree);
   	cout << "European put prices:"
        << endl << endl;
   	PriceTree.Display();
   	cout << "Stock positions in replicating strategy:"
        << endl << endl;
   	XTree.Display();
   	cout << "Money market account positions in replicating strategy:"
        << endl << endl;
   	YTree.Display();	return 0;
}
