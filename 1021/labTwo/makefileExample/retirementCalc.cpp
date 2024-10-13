// Retirement Calculator
// Given an initial deposit/principal, an annual interest rate and a 
// number of years, this program calculates how much money
// will be in the account at the end of those years. 

#include <iostream>
#include <iomanip>
#include "compoundCalc.h"
using namespace std;

int main()
{
	double principal,     // Principal (current deposited amount)
          annualIntRate;      // Annual interest rate

	int years;            // Number of years the money is left to grow

	// Set numeric output formatting
	cout << fixed << showpoint << setprecision(2);

	// Display intro message to user and prompt for input
	cout << "This program computes the amount of money you will have in an \n"
        << "account at the end of a specified number of years, based on the \n"
        << "amount you deposit now and the annual interest rate. \n";

	cout << "\nEnter the amount you are depositing: $";
	cin  >> principal;

	cout << "Enter the annual interest rate as a decimal: ";
	cin  >> annualIntRate;
	
	cout << "Enter the number of years you will let the money grow: ";
	cin  >> years;

	// Display result of calculation using compoundCalc() as part of the streaming output
	cout << "\nYour retirement savings will be $" << compoundCalc(principal, annualIntRate, years) << endl;
	
	return 0;
}


