#ifndef TRAPEZOID_H
#define TRAPEZOID_H

class Trapezoid {
	private:
		double base1;
		double base2;
		double height;

	public:
		Trapezoid() : base1(1), base2(1), height(1) {};
		Trapezoid(double b1, double b2, double h) : base1(b1), base2(b2), height(h) {};

		bool setBase1(double b1);
		bool setBase2(double b2);
		bool setHeight(double h);
		int getBase1();
		int getBase2();
		int getHeight();
		int calcArea();
};

#endif
