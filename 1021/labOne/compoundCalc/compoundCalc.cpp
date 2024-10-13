#include "compoundCalc.h"

float  compoundCalc(float P, float r, float t) {

	float RS;

	RS = P * pow ((1 + r), t);

	return RS;

}
