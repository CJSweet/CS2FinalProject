#ifndef DISCUS_H
#define DISCUS_H
#include "Athlete.h"
#include <ctime>
#include <cstdlib>
using namespace std;



class Discus
{
private:
	/// angle for the object thrown
	double angle;
	/// strength to velocity ratio, helps to even the playing field, also takes into account the different weights used by the genders
	double SVratio;
	int strength;
	int technique;

public:

	Discus(int strength, bool gender)
	{
		angle = (((35 + (rand() % 16)) * 3.14) / 180);
		if (gender == 0)
		{
			SVratio = 0.002694;
			technique = 86 + rand() % 15;
		}
			
		else
		{
			SVratio = 0.002743;
			technique = 78 + rand() % 23;
		}
			
		this->strength = strength;
		
	}
	double ThrowDisc();
};
#endif 