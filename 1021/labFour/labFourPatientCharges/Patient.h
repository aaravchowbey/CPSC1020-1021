#ifndef PATIENT_H
#define PATIENT_H

class Patient {
	private:

		char patientType;
		double services;
		double medication;
		int days;
		double rate;
		bool validateInput(int num);
		bool validateInput(double num);

	public:
		Patient(): patientType('I'), services(0.0), medication(0.0), days(0), rate(0.0) {};
		Patient(char p, double s, double m) : patientType(p), services(s), medication(m) {};
		Patient(char p, double s, double m, int d, double r) : patientType(p), services(s), medication(m), days(d), rate(r) {};

		void setDays(int d);
		void setRate(double r);
		void setServices(double s);
		void setMedication(double m);
		void setPatientType(char p);
		int getDays();
		double getRate();
		double getServices();
		double getMedication();
		char getPatientType();
		double calcTotalCharges();
};

#endif
