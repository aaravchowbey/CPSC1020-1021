#ifndef SQUARE_H
#define SQUARE_H

class Square {
	private:
		double side;

	public:
		Square() : side(1) {};
		Square(double s) : side(s) {};

		bool setSide(double s);
		int getSide();
		int calcArea();
};

#endif
