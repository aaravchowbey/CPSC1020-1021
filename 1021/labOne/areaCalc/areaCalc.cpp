// This program finds the area of a shape based on user input
// Aarav Chowbey
// INCLUDE ANY NEEDED LIBRARIES AND FILES HERE.
#include <iostream>	// To use cout, cin
#include <iomanip>	// To use setprecision

using namespace std;

int main()
 {

	// DEFINE THE NAMED CONSTANT PI HERE AND SET ITS VALUE TO 3.14159
	#define PI 3.14159

	// DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
	// NAME AND AN APPROPRIATE DATA TYPE.
	int userChoice;
	double sideLength;
	double circleRadius;
	double triangleBase;
	double triangleHeight;
	double totalArea;

	// WRITE STATEMENTS HERE TO DISPLAY THE 4 MENU CHOICES.
	cout << "Program to calculate areas of objects\n";
	cout << "\t1 -- square\n";
	cout << "\t2 -- circle\n";
	cout << "\t3 -- right triangle\n";
	cout << "\t4 -- quit\n";

	// WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.
	cin >> userChoice;

	// USE AN IF/ELSE IF STATEMENT TO OBTAIN ANY NEEDED INPUT INFORMATION
	// AND COMPUTE AND DISPLAY THE AREA FOR EACH VALID MENU CHOICE.
	if (userChoice == 1) {
		cout << "Length of side: ";
		cin >> sideLength;
		totalArea = sideLength * sideLength;
		totalArea = ((int)(totalArea * 100)) / 100.0;
		cout << "Area = " << fixed << setprecision(2) << totalArea << endl;
	}
	else if (userChoice == 2) {
		cout << "Radius of the circle: ";
		cin >> circleRadius;
		totalArea = PI * (circleRadius * circleRadius);
		cout << "Area = " << fixed << setprecision(2) << totalArea << endl;

	}
	else if (userChoice == 3) {
		cout << "Base of triangle: ";
		cin >> triangleBase;
		cout << "Height of triangle: ";
		cin >> triangleHeight;
		totalArea = (triangleHeight * triangleBase) / 2;
		cout << "Area = " << fixed << setprecision(2) << totalArea << endl;

	}
	else if (userChoice == 4) {
		return 0;
	}
	else {
		cout << "You entered an invalid choice. Good bye!\n";	// Error message if user has invalid input
	}

	// ASSUME THE USER ENTERS VALID METRICS, E.G. DOESN’T ENTER
	// A STRING OR NEGATIVE NUMBER.

	// IF AN INVALID MENU CHOICE WAS ENTERED, AN ERROR MESSAGE SHOULD
	// BE DISPLAYED.

}

