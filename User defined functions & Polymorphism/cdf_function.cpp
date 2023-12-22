//CFD function checker
#include <cmath>

float cdf(float x) 
{
	if (x < 0) 
		return(1-cdf(-x));
	const float a1 = 0.319381530, a2 = 0.356563782, 
				a3 = 1.781477937, a4 = 1.821255978, a5 = 1.330274429;
	float t = 1/(1+0.2316419*x);
	float normaldistr = 1/sqrt(2*M_PI)*exp(-0.5*x*x);
	float last_term = a1*t + a2*t*t + a3*pow(t,3) + a4*pow(t,4) + a5*pow(t,5);
	return (1 - normaldistr*last_term);
}

float bs(float s)
{	
	float d1, d2, e = 100, r = 0.05, sd = 0.2, t = 0.05;
	d1 = (log(s/e) + (r+0.5*sd))/sd*sqrt(t);
	d2 = d1 - sd*sqrt(t);
	return (s*cdf(d1) - e*exp(-r*t)*cdf(d2));
}
