//Devon Dominick | Aarav Chowbey | ???
//CPSC 1021
//9|11|24
//program calculates hospital patient's total charges of medication, service, etc.

#include "calcTotalCharges.h"
#include "validateUserInput.h"

//Function to validate patient type input
int validatePatientType(char patient) {
	//Prompts user for valid input until input is valid
	while ((patient != 'I') && (patient != 'O')) {
		cout << "Please enter a valid input: ";
		cin >> patient;
	}		
	return patient;
}

int main()
{
	char patient;
	double days, rate, fees, meds, totalCharges;
	bool con;

	cout << "This program will calculate a patient's hospital charges." << endl;
	
	//Gets user input for if person is in-patient or out-patient
	cout << "Enter I for in-patient or O for out-patient: ";
	cin >> patient;
	patient = validatePatientType(patient);
	
	if (patient == 'I') {
		//Gets user input for # of days spent
		con = false;
		while (con == false) {
			cout << "Number of days in the hospital: ";
			cin >> days;
			con = validateUserInput(days);
		}

		//Gets user input for daily roomm rate
		con = false;
		while (con == false) {
			cout << "Daily room rate ($): ";
			cin >> rate;
			con = validateUserInput(rate);
		}

		//Gets user input for hospital services charges
		con = false;
		while (con == false) {
			cout << "Lab fees and other services charges ($): ";
			cin >> fees;
			con = validateUserInput(fees);
			}

		//Gets user input for medication charges
		con = false;
		while (con == false) {
			cout << "Medication charges ($): ";
			cin >> meds;
			con = validateUserInput(meds);
		}

	}
	else if (patient == 'O') {
		//Gets user input for hospital services charges
   		con = false;
   		while (con == false) {
      			cout << "Lab fees and other services charges ($): ";
      			cin >> fees;
      			con = validateUserInput(fees);
      		}
		//Gets user input for medication charges
   		con = false;
   		while (con == false) {
      			cout << "Medication charges ($): ";
      			cin >> meds;
      			con = validateUserInput(meds);
      		}
	}
	//if else statements to calc and print charges based on patient type
	if (patient == 'I') {
		totalCharges = calcTotalCharges(days, rate, fees, meds);
	}
	else {
		totalCharges = calcTotalCharges(fees, meds);
	}
	//Print total charges for user
	cout << "Your total hospital bills is $" << totalCharges << endl;
}
