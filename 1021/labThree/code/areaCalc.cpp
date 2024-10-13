// This program finds the area of a shape based on user input
// Aarav Chowbey and Devon Dominick
// INCLUDE ANY NEEDED LIBRARIES AND FILES HERE.
#include <iostream>	// To use cout, cin
#include <iomanip>	// To use setprecision

#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
#include "Trapezoid.h"

using namespace std;

int main()
 {
	int userChoice;
	double inputDimension;
	bool isValid;
	double totalArea;

	cout << "\t1 -- circle\n";
	cout << "\t2 -- square\n";
	cout << "\t3 -- rectangle\n";
	cout << "\t4 -- trapezoid\n";
	cout << "\t5 -- quit\n";

	cin >> userChoice;

	if (userChoice == 1) { 
		//Creates a circle instance, stores it, outputs total area
		Circle userCircle;
		do { 
			cout << "Radius: ";
			cin >> inputDimension;
			isValid = userCircle.setRadius(inputDimension);
		} while (!isValid);
		totalArea = userCircle.calcArea();
		cout << "Area: " << fixed << setprecision(1) << totalArea << endl;
	}
	else if (userChoice == 2) {
		//Creates a square instance, stores input, outputs area
		Square userSquare;
		do { 
			cout << "Side: ";
			cin >> inputDimension;
			isValid = userSquare.setSide(inputDimension);
		} while (!isValid);
		totalArea = userSquare.calcArea();
		cout << "Area: " << fixed << setprecision(1) << totalArea << endl;

	}
	else if (userChoice == 3) {
		//Create rectangle instance, ask user for inputs, store inputs
		Rectangle userRectangle;
		do {
			cout << "Length: ";
			cin >> inputDimension;
			isValid = userRectangle.setLength(inputDimension);
		} while (!isValid);
		do {
			cout << "Width: ";
			cin >> inputDimension;
			isValid = userRectangle.setWidth(inputDimension);
		} while (!isValid);
		//Calc and output total area
		totalArea = userRectangle.calcArea();
		cout << "Area: " << fixed << setprecision(1) << totalArea << endl;

	}
	else if (userChoice == 4) {
		//Create trapezoid instance, ask user for inputs, store inputs
		Trapezoid userTrapezoid;
		do {
			cout << "Base1: ";
			cin >> inputDimension;
			isValid = userTrapezoid.setBase1(inputDimension);
		} while (!isValid);
		do {
			cout << "Base2: ";
			cin >> inputDimension;
			isValid = userTrapezoid.setBase2(inputDimension);
		} while (!isValid);
		do {
			cout << "Height: ";
			cin >> inputDimension;
			isValid = userTrapezoid.setHeight(inputDimension);
		} while (!isValid);
		//Calc and output total area
		totalArea = userTrapezoid.calcArea();
		cout << "Area: " << fixed << setprecision(1) << totalArea << endl;

	}
	else if (userChoice == 5) {
		return 0;
	}
	else {
		cout << "You entered an invalid choice. Good bye!\n";	// Error message if user has invalid input
	}
}
