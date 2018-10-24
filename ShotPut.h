#ifndef SHOTPUT_H
#define SHOTPUT_H
#include "Athlete.h"
#include <ctime>
#include <cstdlib>
using namespace std;

class ShotPut
{
private:
	/// angle for the object thrown
	double angle;
	/// strength to velocity ratio, helps to even the playing field
	double SVratio;
	int strength;
	int technique;
public:
	
	ShotPut(int strength, bool gender)
	{
		angle =(((35 + (rand() % 16)) * 3.14) / 180);
		if (gender == 0)
		{
			technique = 89 + rand() % 12;
			SVratio = 0.001505;		
		}
		else
		{
			SVratio = 0.001489;
			technique = 82 + rand() % 19;
		}
		this->strength = strength;
		
	}
	double ThrowShot();
};
#endif
