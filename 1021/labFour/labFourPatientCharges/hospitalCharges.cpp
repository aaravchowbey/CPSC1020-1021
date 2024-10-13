//Devon Dominick | Aarav Chowbey | 
//CPSC 1021
// 9|29|24
//program calculates hospital patient's total charges of medication, service, etc.

using namespace std;
#include <iostream>
#include "Patient.h"

//Function to validate patient type input
int main()
{
	char patient;
	double days, rate, fees, meds, totalCharges;

	Patient userPatient;

	cout << "This program will calculate a patient's hospital charges." << endl;
	
	//Gets user input for if person is in-patient or out-patient
	cout << "Enter I for in-patient or O for out-patient: ";
	cin >> patient;
	userPatient.setPatientType(patient);
	
	if (userPatient.getPatientType() == 'I') {
		//Gets user input for # of days spent
			cout << "Number of days in the hospital: ";
			cin >> days;
			userPatient.setDays(days);

		//Gets user input for daily roomm rate
			cout << "Daily room rate ($): ";
			cin >> rate;
			userPatient.setRate(rate);

		//Gets user input for hospital services charges
			cout << "Lab fees and other services charges ($): ";
			cin >> fees;
			userPatient.setServices(fees);

		//Gets user input for medication charges
			cout << "Medication charges ($): ";
			cin >> meds;
			userPatient.setMedication(meds);

	}
	else if (patient == 'O') {
		//Gets user input for hospital services charges
      			cout << "Lab fees and other services charges ($): ";
      			cin >> fees;
      			userPatient.setServices(fees);
		//Gets user input for medication charges
      			cout << "Medication charges ($): ";
      			cin >> meds;
      			userPatient.setMedication(meds);
	}

	totalCharges = userPatient.calcTotalCharges();
	cout << "Your total hospital bills is $" << totalCharges << endl;
}

