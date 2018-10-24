#include "Discus.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double Discus::ThrowDisc()
{
	/// v0 is the initial velocity of the throw
	double v0 = strength * SVratio * technique;

	double distDisc = (2 * pow(v0, 2)*sin(angle)*cos(angle)) / 9.8;

	return distDisc;
}