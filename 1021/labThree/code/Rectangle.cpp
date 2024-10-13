#include "Rectangle.h"

//create class for rectangle with a setter function that returns a bool
//getter function that returns value
//a function that calculates area
//member variables are private, member functions are public
//
//Setters
bool Rectangle::setLength(double newLength){
	if (newLength >= 0) {
		length = newLength;
		return true;
	}
	else {
		return false;
	}

}
bool Rectangle::setWidth(double newWidth) {
	if (newWidth >= 0) {
		width = newWidth;
		return true;
	}
	else {
		return false;
	}
}
//Getters
double Rectangle::getWidth() {return width;}
double Rectangle::getLength() {return length;}
//Calculates area
double Rectangle::calcArea() {return (length * width);}
