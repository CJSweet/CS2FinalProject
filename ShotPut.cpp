#include "ShotPut.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double ShotPut::ThrowShot()		
{
	double v0 = strength * SVratio * technique;

	double distShot = (2 * pow(v0, 2)*sin(angle)*cos(angle)) / 9.8;

	return distShot;
}

