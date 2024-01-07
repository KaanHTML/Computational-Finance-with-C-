#ifndef Options01_h
#define Options01_h
#include "BinModel.h"

void GetInput(double &k, int &n);

double PriceByCRR(BinModel Model, int N, double K, double (*Payoff)(double z, double k));

double CallPayoff(double z, double k);

double PutPayoff(double z, double k);

#endif