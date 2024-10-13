#include "compoundCalc.h"

int main() {

	float P, r, t, RS;

	cout << "What is the principal? ";
   cin >> P;

   cout << "What is the interest rate? ";
   cin >> r;

   cout << "What is the number of years? ";
   cin >> t;

	RS = compoundCalc(P, r, t);

	cout << "Your retirement savings will be $" <<fixed<<setprecision(2)<< RS << endl;

	return 0;

}
