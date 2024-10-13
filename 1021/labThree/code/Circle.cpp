#include "Circle.h"
using namespace std;

//Setter
bool Circle::setRadius(double newRadius){
	if (newRadius >= 0) {
		radius = newRadius;
		return true;
	}
	else {
		return false;
	}
}
//Getter
double Circle::getRadius() {
	return radius;
}
//Area calculation
double Circle::calcArea() {
	return (radius*radius) * 3.14;
}


