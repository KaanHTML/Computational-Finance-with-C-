#ifndef BinModel_h
#define BinModel_h


class BinModel 
{
	private:
		double S0;
		double U;
		double D;
		double R;
	public:
		void GetInput();
		//computing risk-neutral probability
		double RiskNeutProb();
		//computing the stock price at node n,i
		double S(int n, int i);
		// Get risk free rate
		double GetR();
};

#endif