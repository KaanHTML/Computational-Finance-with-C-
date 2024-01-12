#ifndef Options01_h
#define Options01_h
#include "BinModel.h"
#include "BinLattice.h"

class Option
{
	private:
		// steps to expiry
		int N;
	public:
		void SetN(int N_){N=N_;}
		int GetN(){return N;}
		virtual double Payoff(double z)=0;
};


class EurOption: public virtual Option
{
	public:
		double PriceByCRR(BinModel Model, 
			BinLattice<double>& PriceTree1,
			BinLattice<double>& xVal,
			BinLattice<double>& yVal);
};

class AmOption: public virtual Option
{
	public:
		double PriceBySnell(BinModel Model,
			BinLattice<double>& PriceTree,
			BinLattice<bool>& StoppingTree);
};


class Call: public EurOption, public AmOption
{
	private: 
		double K;
	public:
		double Payoff(double z);
		void SetK(double K_){K=K_;}
		int GetInput();
};


class Put: public EurOption, public AmOption
{
	private: 
		double K;
	public:
		double Payoff(double z);
		void SetK(double K_){K=K_;}
		int GetInput();
};

#endif



