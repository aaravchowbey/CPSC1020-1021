// This program prints a character from its ASCII code.
#include <iostream>
using namespace std;

int main()
{
    int number = 65;

    // Display the value of the number variable
    cout << number << endl;

    // Needs a type cast to display the value of number
    // converted to the char data type
     cout << (char)(number) << endl;
    return 0;
}