// This file implements function compoundCalc() that calculates the
// future value of an account given its principal, interest rate, and
// time period over which interests are compounded

#include <cmath>           // Needed to use the pow function
#include "compoundCalc.h"

double compoundCalc(double p, double i, double t)
{
	double finalAmt = p * pow(1 + i, t);
	return finalAmt;
	
}
