#include "Square.h"

//Sets the value of the side from the class to what the user inputed & validates user input
bool Square::setSide(double s) {
	if (s >= 0) {
		side = s;
		return true;
	}
	else {
		return false;
	}
}
//Returns the value that class side is set to
int Square::getSide() {
	return side;
}

int Square::calcArea() {
	return side * side;
}
