#ifndef HAMMER_H
#define HAMMER_H
#include "Athlete.h"
#include <ctime>
#include <cstdlib>
using namespace std;

class Hammer
{
private:
	/// angle for the object thrown
	double angle;
	/// strength to velocity ratio, helps to even the playing field
	double SVratio;
	int strength;
	int technique;
public:

	Hammer(int strength, bool gender)
	{
		angle = (((35 + (rand() % 16)) * 3.14) / 180);
		if (gender == 0)
		{
			SVratio = 0.002916;
			technique = 81 + rand() % 20;
		}
		else
		{
			SVratio = 0.002852;
			technique = 80 + rand() % 21;
		}
			
		
		this->strength = strength;
		
	}
	double ThrowHam();
};
#endif 