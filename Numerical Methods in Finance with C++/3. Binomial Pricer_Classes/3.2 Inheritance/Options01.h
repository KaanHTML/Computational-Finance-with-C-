#ifndef Options01_h
#define Options01_h
#include "BinModel.h"


class EurOption
{
	private:
		// steps to expiry
		int N;
		// pointer to payoff function
		double (*Payoff)(double z, double k); //do i really need this?
	public:
		void SetN(int N_){N=N_;};
		void SetPayoff(double (*Payoff_)(double z, double k)){Payoff = Payoff_;};
		//pricing European option
		double PriceByCRR(BinModel Model, double K);
};

// computing call payoff
double CallPayoff(double z, double k);


class Call: public EurOption
{
	private: 
		double K;
	public:
		Call(){SetPayoff(CallPayoff);}
		double GetK(){return K;}
		int GetInput();
};

// computing put payoff
double PutPayoff(double z, double k);

class Put: public EurOption
{
	private: 
		double K;
	public:
		Put(){SetPayoff(PutPayoff);}
		double GetK(){return K;}
		int GetInput();
};




#endif



