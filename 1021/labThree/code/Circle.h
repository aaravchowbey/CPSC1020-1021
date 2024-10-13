#ifndef Circle_H
#define Circle_H
using namespace std;

class Circle {
	private:
		double radius;

	public:
		bool setRadius(double newRadius);
		double getRadius();
		double calcArea();

};

#endif
