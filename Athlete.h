//// Header for athlete class where all the throwing class will be joined together
#ifndef ATHLETE_H
#define ATHLETE_H
#include "Javelin.h"
#include "Discus.h"
#include "ShotPut.h"
#include "Hammer.h"
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

class Athlete
{
private:
	///strength rating 1-10
	int strength;	 
	///Name of the athlete
	string name;
	/// gender is a bool, 0 is male, 1 is female
	bool gender;
	//distances for each event
	double distShot;
	double distJav;
	double distHam;
	double distDisc;

public:
	Athlete(string name, bool gender)
	{
		strength = 85 + rand() % 16;
		this->name = name;
		this->gender = gender;
		distShot = 0;
		distDisc = 0;
		distHam = 0;
		distJav = 0;
	}
	//Functions simulating throw
	void ThrowShot();
	void ThrowJav();
	void ThrowDisc();
	void ThrowHam();
	//Distance getters for each event
	double getDistShot();
	double getDistJav();
	double getDistDisc();
	double getDistHam();
	//Characteristics of athletes
	string getName();
	int getStrength();
};



#endif
