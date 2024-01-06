#ifndef Options01_h
#define Options01_h

void GetInput(double &k, int &n);

double PriceByCRR(double S0, double U, double D,
                  double R, int N, double K, double (*Payoff)(double z, double k));

double CallPayoff(double z, double k);

double PutPayoff(double z, double k);

#endif