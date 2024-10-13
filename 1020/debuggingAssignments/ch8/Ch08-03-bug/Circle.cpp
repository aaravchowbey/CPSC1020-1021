
#include <iostream>
#include <iomanip>
#include <vector>
#include "Circle.h"         // Circle class declaration file
using namespace std;

int main()
{
    // Define a vector of Circle objects. Use an initialization list
    // to call the 1-argument constructor for the objects.
    vector<Circle> circles = {Circle(0.0), Circle(2.0), Circle(2.5), Circle(56.0), Circle(75.0), Circle(5.0)};

    // Display the area of each object
    cout << "\nHere are the areas of the " << circles.size() << " circles.\n";
    for (Circle& x : circles) {
      cout << "circle " << setw(8) << fixed << setprecision(2) << x.findArea() << endl;
    }

    // Calculate and display the average area
    double totalArea = 0;
    for (Circle& x : circles) {
      totalArea += x.findArea();
    }

    double averageArea = totalArea / circles.size();
    cout << "The average area of these circles is: " << fixed << setprecision(2) << averageArea << endl;

    return 0;
}
