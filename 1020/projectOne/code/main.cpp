#include <iostream>
#include <string>

#include "Date.h"
#include "calcDays.h"

using namespace std;

int day;
int month;
int year;

int dayPositive;
int monthPositive;
int yearPositive;


int main() {
	string testResult;
	int lengthOfIsolation;
	string stringDate;

	string exposedToPositive;
	string hasSecondDose;
	bool fullyVaccinated;			
	int daysSinceSecond;
	
	//Get users test result and input validate it	
	cout << "What is your test result";
	getline(cin,testResult);
	while (testResult != "Positive") {
		if (testResult != "Negative") {
			cout << "Wrong input try again";
			getline(cin,testResult);
		}
	}
	//testResult if case 1
	if (testResult == "Positive") {
		//Input date tested positive
		cout << "What date did you test positive?";
		getline(cin,stringDate);
		monthPositive = stoi(stringDate.substr(0,2));
		dayPositive = stoi(stringDate.substr(3,2));
		yearPositive = stoi(stringDate.substr(6,4));
		//create a instance of class date
		Date datePositive(day, month, year);
		lengthOfIsolation = 7;
		cout << testResult;
		cout << datePositive.showDate();
		cout << lengthOfIsolation;
		datePositive.addDays(lengthOfIsolation);
		cout << datePositive.showDate();
	}
	else if (testResult == "Negative") {
		Date datePositive(dayPositive, monthPositive, yearPositive);
		cout << "Were you exposed to a positive case?";
		getline(cin, exposedToPositive);
		if (exposedToPositive == "No") {
			lengthOfIsolation = 0;
			cout << testResult;
			cout << exposedToPositive;
			cout << lengthOfIsolation;
		}
		else {
			//Ask user when they were exposed to a second dose
			cout << "When were you exposed to a positive case";
			getline(cin, stringDate);
			month = stoi(stringDate.substr(0,2));
			day = stoi(stringDate.substr(3,2));
			year = stoi(stringDate.substr(6,4));
			Date dateExposed(day, month, year);
			//Ask user if they have had a second dose
			cout << "Have you had a second dose";
			if (hasSecondDose == "Yes") {
				cout << "When did you get your second dose?";
				getline(cin, stringDate);
				month = stoi(stringDate.substr(0,2));
				day = stoi(stringDate.substr(3,2));
				year = stoi(stringDate.substr(6,4));
				Date dateSecondDose(day, month, year);
				daysSinceSecond = calcDays(dateExposed, dateSecondDose);
				if (daysSinceSecond > 14) {
					fullyVaccinated = true;
				}	
				else {
					fullyVaccinated = false;
				}
				if ((fullyVaccinated) && (hasSecondDose == "No")) {
					lengthOfIsolation = 3;
					cout << testResult;
					cout << exposedToPositive;
					cout << dateExposed.showDate();
					cout << hasSecondDose;
					cout << dateSecondDose.showDate();
					cout << fullyVaccinated;
					cout << lengthOfIsolation;
					datePositive.addDays(lengthOfIsolation);
					cout << datePositive.showDate();
				}
				else {
					lengthOfIsolation = 12;
					cout << testResult;
					cout << exposedToPositive;
					cout << dateExposed.showDate();
					cout << hasSecondDose;
					cout << fullyVaccinated;
					cout << lengthOfIsolation;
					datePositive.addDays(lengthOfIsolation);
					cout << datePositive.showDate();
				}
			}
		}
				
	}

}

