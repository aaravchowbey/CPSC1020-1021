#ifndef CUSTOMER_H
#define CUSTOMER_H

class Student {
	private:
		//
		string name;
		string address;
		string email; 
		string CUID; 		// Class specific
		string gradeLevel;	// Class specific
	public: 
		// Constructors
		Student(string n, string a, string e, string c, string g) : name(n), address(n), email(e), CUID(c), gradeLevel(g) {};
		// Setters
		void setName(string d);
		void setAddress(string a);
		void setEmail(string e);
		void setCUID(string c);
		void setGradeLevel(string g);

		string getName();
		string getAddress();
		string getEmail();
		string getCUID();
		string getGradeLevel();

		//

};

#endif

