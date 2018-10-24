//// Main file for everthing to come together
#include "Athlete.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

// Address the mass differences
// Different podiums for each event (maybe for gender)

int main()
{
	srand(time(NULL));

	//// File I/O

////\\cs1\2020\csweet20\CS-172-1\FINAL_PROJECT\;

	////Male name
	ifstream nameM;
	nameM.open("Z:\NameMen.txt");
	string male;
	if (nameM.is_open())
	{
		while (!nameM.eof())
		{
			getline(nameM, male);
			cout << male;
		}
	}
	else
		cout << "" << endl; ///not open
	//cout << name << endl;;
	nameM.close();

	////Female name
	ifstream nameF;
	nameF.open("Z:\NameWomen.txt");
	string female;
	if (nameF.is_open())
	{
		while (!nameF.eof())
		{
			getline(nameF, female);
			cout << female;
		}
	}
	else
		cout << "" << endl; ////not open
	nameF.close();

	//// A vector of 10 athletes, each element points to a new athlete class, and from that 
	//// we can call on all the throwing event classes. 
	vector<Athlete *> athletes(10);
	//// Priority queue so that each throwing event is ordered from largest value at the top, and smallest at bottom. For the
	//// podium finish
	priority_queue<double> podiumShot;
	priority_queue<double> podiumJav;
	priority_queue<double> podiumHam;
	priority_queue<double> podiumDisc;

	Athlete one("Bob", 0);
	Athlete two("Bill", 0);
	Athlete three("Joetta", 1);
	Athlete four("Jill", 1);
	Athlete five("Jessica", 1);
	Athlete six("Sam", 1);
	Athlete seven("Phil", 0);
	Athlete eight("James", 0);
	Athlete nine("Beth", 1);
	Athlete ten("Josh", 0);
	///Add each athlete to vector of athletes
	athletes[0] = &one;
	athletes[1] = &two;
	athletes[2] = &three;
	athletes[3] = &four;
	athletes[4] = &five;
	athletes[5] = &six;
	athletes[6] = &seven;
	athletes[7] = &eight;
	athletes[8] = &nine;
	athletes[9] = &ten;

	for (int i = 0; i < athletes.size(); i++)	//Calling on the throw function for each of the events
	{
		(athletes[i])->ThrowShot();
		(athletes[i])->ThrowJav();
		(athletes[i])->ThrowHam();
		(athletes[i])->ThrowDisc();
	}

	for (int i = 0; i < athletes.size(); i++)	//Adding each athlete's distance to the priority queue
	{
		podiumShot.push((athletes[i])->getDistShot());
		podiumJav.push((athletes[i])->getDistJav());
		podiumHam.push((athletes[i])->getDistHam());
		podiumDisc.push((athletes[i])->getDistDisc());
	}
	cout << endl;
	cout << "Hello and welcome to the annual CS2 Games!! We have ten of the best athletes " << endl;
	cout << "in the entire galaxy! Let's meet the athletes: " << endl;
	cout << "Name\t\tStrength" << endl;
	for (int i = 0; i < 10; i++)	//Displaying the name and strength of all athletes
	{
		cout << athletes[i]->getName() << "\t\t" << athletes[i]->getStrength() << endl;

	}
	cout << endl;
	cout << "Now let's see how they have done!" << endl;
	cout << "The podium finish for the Shotput: " << endl;	
	cout << "   Name:\tDistance (m):" << endl;
	for (int i = 0; i < 3; i++)		//Displaying podium for Shotput
	{
		cout << (i + 1) << ". ";
		for (int i = 0; i < athletes.size(); i++)
		{
			if ((athletes[i])->getDistShot() == podiumShot.top())
				cout << (athletes[i])->getName() << "  \t";
		}
		cout << podiumShot.top() << endl;
		podiumShot.pop();
	}
	cout << endl;
	cout << "The podium finish for the Javelin: " << endl;
	cout << "   Name:\tDistance (m):" << endl;
	for (int i = 0; i < 3; i++)		//Displaying podium for Javelin
	{
		cout << (i + 1) << ". ";
		for (int i = 0; i < athletes.size(); i++)
		{
			if ((athletes[i])->getDistJav() == podiumJav.top())
				cout << (athletes[i])->getName() << "  \t";
		}
		cout << podiumJav.top() << endl;
		podiumJav.pop();
	}
	cout << endl;
	cout << "The podium finish for the Hammer: " << endl;
	cout << "   Name:\tDistance (m):" << endl;
	for (int i = 0; i < 3; i++)		//Displaying podium for Hammer
	{
		cout << (i + 1) << ". ";
		for (int i = 0; i < athletes.size(); i++)
		{
			if ((athletes[i])->getDistHam() == podiumHam.top())
				cout << (athletes[i])->getName() << "  \t";
		}
		cout << podiumHam.top() << endl;
		podiumHam.pop();
	}
	cout << endl;
	cout << "The podium finish for the Discus: " << endl;
	cout << "   Name:\tDistance (m):" << endl;
	for (int i = 0; i < 3; i++)		//Displaying podium for Discus
	{
		cout << (i + 1) << ". ";
		for (int i = 0; i < athletes.size(); i++)
		{
			if ((athletes[i])->getDistDisc() == podiumDisc.top())
				cout << (athletes[i])->getName() << "  \t";
		}
		cout << podiumDisc.top() << endl;
		podiumDisc.pop();
	}

	return 0;
}