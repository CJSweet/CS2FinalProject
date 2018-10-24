#include "Javelin.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double Javelin::ThrowJav()
{
	double v0 = strength * SVratio * technique;

	double distJav = (2 * pow(v0, 2)*sin(angle)*cos(angle)) / 9.8;

	return distJav;
}
