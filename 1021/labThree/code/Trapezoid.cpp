#include "Trapezoid.h"
	//Sets the value of the side from the class to what the user inputed & validates user input
bool Trapezoid::setBase1(double b1) {
	if (b1 >= 0) {
		base1 = b1;
		return true;
	}
		
	else {
		return false;
	}
}
	
bool Trapezoid::setBase2(double b2) {
	if (b2 >= 0) {
		base2 = b2;
		return true;
	}

	else {
		return false;
	}
}
bool Trapezoid::setHeight(double h) {
	if (h >= 0) {
		height = h;
		return true;
	}

	else {
		return false;
	}
}
//Returns the value that class side is set to
int Trapezoid::getBase1() {
	return base1;
}
int Trapezoid::getBase2() {
	return base2;
}
int Trapezoid::getHeight() {
	return height;
}
int Trapezoid::calcArea() {
	return (base1 + base2) / 2 * height;
}
