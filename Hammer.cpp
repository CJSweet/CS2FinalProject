#include "Hammer.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double Hammer::ThrowHam()
{
	double v0 = strength * SVratio * technique;

	double distHam = (2 * pow(v0, 2)*sin(angle)*cos(angle)) / 9.8;

	return distHam;
}
