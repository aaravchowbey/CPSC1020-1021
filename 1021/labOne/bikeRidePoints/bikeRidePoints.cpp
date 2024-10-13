// This program returns the amount of points a user by using bikeshare.
// Aarav Chowbey & Devon Dominick
// INCLUDE ANY NEEDED LIBRARIES AND FILES HERE.
#include <iostream>
using namespace std;

int main()
 {
	// Variables for amount of points per ride
	#define zeroRides 	0
	#define oneRide 	3
	#define twoRides 	10
	#define threeRides 	15
	#define fourRides 	30
	#define fiveOrMoreRides 50


	int amountOfRides;	// User's amount of rides
	int pointsEarned;	// Amount of rides completed by user

	// Asking user for amount of rides and storing it
	cout << "How many times did you ride a bike to campus?\n";
	cin >> amountOfRides;

	// Checking to see that user has not input a negative number
	while (amountOfRides < 0) {
		cout << "Please enter a valid input\n";
		cin >> amountOfRides;
	}

	// Determining how many points the user has earned based on rides
	switch (amountOfRides) {

		case 0:
			pointsEarned = zeroRides;
			break;
		case 1:
			pointsEarned = oneRide;
			break;
		case 2:
			pointsEarned = twoRides;
			break;
		case 3:
			pointsEarned = threeRides;
			break;
		case 4:
			pointsEarned = fourRides;
			break;
		default:
			pointsEarned = fiveOrMoreRides;
			break;
	}
	
	// Letting user know how many points they have earned
	cout << "You earned " << pointsEarned << " points this semester";

 }
