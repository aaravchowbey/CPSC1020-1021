#ifndef SQUARE_H
#define SQUARE_H

using namespace std;

class Square {
	private:
		double side;

	public:
		Square();
		Square(double s);

		bool setSide(double s);
		int getSide();
		int getArea();
};

#endif
