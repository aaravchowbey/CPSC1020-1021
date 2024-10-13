#include "Patient.h"

bool Patient::validateInput(int num) {
	if (num >= 0) {
		return true;
	}
	else {
		return false;
	}
}

bool Patient::validateInput(double num) {
	if (num >= 0.0) {
		return true;
	}
	else {
		return false;
	}
}

void Patient::setDays(int d) {
	if (validateInput(d)) {
		days = d;
	} 
	else {
		days = 0;
	}
}

void Patient::setRate(double r) {
	if (validateInput(r)) {
		rate = r;
	} 
	else {
		rate = 0.0;
	}
}

void Patient::setServices(double s) {
	if (validateInput(s)) {
		services = s;
	}
	else {
		services = 0.0;
	}
}

void Patient::setMedication(double m) {
	if (validateInput(m)) {
		medication = m;
	}
	else {
		medication = 0.0;
	}
}

void Patient::setPatientType(char p) {
	if ((p == 'I') || (p == 'O')) {
		patientType = p;
	}
	else {
		patientType = 'I';
	}
}

int Patient::getDays() {
	return days;
}

double Patient::getRate() {
return rate;
}

double Patient::getServices() {
	return services;
}

double Patient::getMedication() {
	return medication;
}

char Patient::getPatientType() {
	return patientType;
}

double Patient::calcTotalCharges() {
	if (patientType == 'I') {
		return (days * rate) + services + medication;
	}
	else {
		return services + medication;
	}
}
