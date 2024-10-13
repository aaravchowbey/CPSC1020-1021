#include "calcTotalCharges.h"


//Functions to find total charges for both in and out patient
double calcTotalCharges(int daysSpent, double roomRate, double serviceCharges, double medCharges) {
	double totalCost = 0;
	totalCost = (daysSpent * roomRate) + serviceCharges + medCharges;
	return totalCost;
}

double calcTotalCharges(double serviceCharges, double medCharges) {
	double totalCost = 0;
	totalCost = serviceCharges + medCharges;
	return totalCost;
}
