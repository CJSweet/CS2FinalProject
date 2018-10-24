#ifndef  JAVELIN_H
#define JAVELIN_H
#include "Athlete.h"
#include <ctime>
#include <cstdlib>
using namespace std;

class Javelin
{
private:
	/// angle for the object thrown
	double angle;
	/// strength to velocity ratio, helps to even the playing field
	double SVratio;
	int strength;
	int technique;
public:

	Javelin(int strength, bool gender)
	{
		angle = (((35 + (rand() % 16)) * 3.14) / 180);
		if (gender == 0)
		{
			SVratio = 0.003107;
			technique = 85 + rand() % 16;
		}
			
		else
		{
			SVratio = 0.002661;
			technique = 80 + rand() % 21;
		}	
		this->strength = strength;
		
	}
	double ThrowJav();
};
#endif
