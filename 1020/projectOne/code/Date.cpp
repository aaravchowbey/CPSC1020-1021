#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

bool monthVerification(int m) {
	if (m>12 || m<1){return false;}
	else {return true;}
}

bool yearVerification(int y) {
	if ((y>2024) || (y<2023)){return false;}
	else {return true;}
}
bool dayVerification(int d, int m, int y){
	if (d<1) {
		return false;
	}
	bool leapYear = (y == 2024);
	if (m == 2) {
		if (leapYear && (d>29)) {
			return false;
		}
		else if (d>28) {
			return false;
		}

	}
	else if (m == 4||m == 6||m == 9||m == 11){
		if (d>30) {return false;}
	}
	else if (d>31) {
		return false;
	}
	return true;	
}

Date::Date(int d, int m, int y){
	if (yearVerification(y)) {
		year = y;
	}
	else {
		day = 1;
		month = 1;
		year = 2023;
		return;
	}

	if (monthVerification(m)){
		month = m;
	}
	else {
		day = 1;
		month = 1;
		year = 2023;
		return;
	}
	if (dayVerification(d,m,y)){
		day = d;
	}
	else {
		day = 1;
		month = 1;
		year = 2023;
		return;
	}
}
//Setters
bool Date::setDay(int d){
	if (dayVerification(d, month, year)){
		day = d;
		return true;
	}
	else {
		return false;
	}
}
bool Date::setMonth(int m) {
	if (monthVerification(m) && dayVerification(day,m,year)){ 
		month = m;
		return true;
	}
	else {
		return false;
	}
}
bool Date::setYear(int y) {
	if (yearVerification(y)){
		year = y;
		return true;
	}
	else { 
		return false;
	}
}
void Date::addDays(int d) {
	day += d;
	
	if (month == 1||month == 3||month == 5||month == 7||month == 8||month == 10||month == 12){
		if (d > 31) {
			day -= 31;
			month++;
		}
	}
	else if (month == 4||month == 6||month == 9||month == 11){
		if (d > 30) {
			day -= 30;
			month++;
		}
	}
	else if (year == 2024){
		if (d > 29) {
			day -= 29;
			month++;
		}
		else if (d > 28){
			day-=28;
			month++;
		}
	}
	if (month > 12) {
		year++;
		month = 1;
	}
}
//Getters
int Date::getDay() {
	return day;
}
int Date::getMonth() {
	return month;
}
int Date::getYear() {
	return year;
}
string Date::showDate() {
	string monthString = (month < 10 ? "0" : "") + to_string(month);
    	string dayString = (day < 10 ? "0" : "") + to_string(day);
	return monthString + "/" + dayString + "/" + to_string(year);
}

