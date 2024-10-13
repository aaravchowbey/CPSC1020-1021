#ifndef TRAPEZOID_H
#define TRAPEZOID_H

class Trapezoid {
	private:
		double base1;
		double base2;
		double height;

	public:
		Trapezoid();
		Trapezoid(double b1, double b2, double h);

		bool setBase1(double b1);
		bool setBase2(double b2);
		bool setHeight(double h);
		int getBase1();
		int getBase2();
		int getHeight();
		int getArea();
};

#endif
