#ifndef Rectangle_H

#define Rectangle_H

class Rectangle {
	private:
		double length;
		double width;
	public:
		//Setters
		bool setLength(double newLength);
		bool setWidth(double newWidth);
		//Getters
		double getWidth();	
		double getLength();
		//Calculates area
		double calcArea();
};


#endif
