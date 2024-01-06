#ifndef BinModel_h
#define BinModel_h

void GetInput(double &S0, double &U, double &D, double &R);

//computing risk-neutral probability
double RiskNeutProb(double U, double D, double R);

//computing the stock price at node n,i
double S(double S0, double U, double D, int n, int i);

#endif