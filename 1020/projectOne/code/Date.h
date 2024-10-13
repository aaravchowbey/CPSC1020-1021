#ifndef Date_H
#define Date_H

bool monthVerification(int m);

bool yearVerification(int y);

bool dayVerification(int d, int m, int y);

class Date {
	private:
		int day;
		int month;
		int year;

	public:
		Date() : day(1), month(1), year(2023) {};
		Date(int d, int m, int y);
		//Setters
		bool setDay(int d);
		bool setMonth(int m);
		bool setYear(int y);
		//Getters
		int getDay();
		int getMonth();
		int getYear();
		std::string showDate();
		void addDays(int d);
};

#endif
