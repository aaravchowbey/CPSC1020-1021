#include <iostream>
#include <string>
#include "calcDays.h"
#include "Date.h"
using namespace std;

//2d array with each month and corresponding number of days
int daysEachMonth[12][2] = {{1,31},{2,28},{3,31},{4,30},{5,31},{6,30},{7,31},{8,31},{9,30},{10,31},{11,30},{12,31}};


int daysDiff1 = 0;
int daysDiff2 = 0;

int calcDays(Date& date1, Date& date2) {

	daysDiff1 = 0;
	daysDiff2 = 0;
	//Getting variables for dateOne and dateTwo
	int dateOneDay = date1.getDay();
	int dateOneMonth = date1.getMonth();
	int dateOneYear = date1.getYear();

	int dateTwoDay = date2.getDay();
	int dateTwoMonth = date2.getMonth();
	int dateTwoYear = date2.getYear();

	//Checking to see if the days are equal
	if ((date1.getDay() == date2.getDay()) && (date1.getMonth() == date2.getMonth()) && (date1.getYear() == date2.getYear())) {
		return 0;
	}


	//DateOne difference from 01/01/2023
	daysDiff1 += dateOneDay;

	

	if (dateOneMonth == 1) {
		daysDiff1 += 0;
	}	
	else {
		int monthsDiff = (dateOneMonth - 1);
		while (monthsDiff >= 1) {
			if ((monthsDiff == 2) && (dateOneYear == 2024)) {
				daysDiff1 += 29;
				monthsDiff--;
			}
			else {
				daysDiff1 += daysEachMonth[monthsDiff - 1][1];
				monthsDiff--;
			}
		}
	}

	if (dateOneYear == 2024) {
		daysDiff1 += 365;
	}

	//DateTwo difference from 01/01/2023
	daysDiff2 += dateTwoDay;
	if (dateTwoMonth == 1) {
		daysDiff2 += 0;
	}	
	else {
		int monthsDiff = (dateTwoMonth - 1);
		while (monthsDiff >= 1) {
			if ((monthsDiff == 2) && (dateTwoYear == 2024)) {
				daysDiff2 += 29;
				monthsDiff--;
			}
			else {
				daysDiff2 += daysEachMonth[monthsDiff - 1][1];
				monthsDiff--;
			}
		}
	}

	if (dateTwoYear == 2024) {
		daysDiff2 += 365;
	}

	//Return the positive difference
	if (daysDiff1 > daysDiff2) {
		return (daysDiff1 - daysDiff2);
	}
	else {
		return (daysDiff2 - daysDiff1);
	}

}
