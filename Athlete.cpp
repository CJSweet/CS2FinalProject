/// Cpp file for the athlete class
#include "Athlete.h"
#include "Javelin.h"
#include "ShotPut.h"
#include "Discus.h"
#include "Hammer.h"
#include <new>
using namespace std;

void Athlete::ThrowHam()
{
	Hammer * ham = new Hammer(strength, gender);
	distHam = ham->ThrowHam();
}

double Athlete::getDistHam()
{
	return distHam;
}

void Athlete::ThrowDisc()
{
	Discus * disc = new Discus(strength, gender);
	distDisc = disc->ThrowDisc();
}

double Athlete::getDistDisc()
{
	return distDisc;
}

void Athlete::ThrowJav()
{
	Javelin * jav = new Javelin(strength, gender);
	distJav = jav->ThrowJav();
}

double Athlete::getDistJav()
{
	return distJav;
}

void Athlete::ThrowShot()
{
	ShotPut * shot = new ShotPut(strength, gender);
	distShot = shot->ThrowShot();
}

double Athlete::getDistShot()
{
	return distShot;
}

string Athlete::getName()
{
	return name;
}

int Athlete::getStrength()
{
	return strength;
}