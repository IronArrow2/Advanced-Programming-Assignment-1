#pragma once
#include "Student.h"

class GamingStudent : public Student
{
private:
	string gamingSystem;
	int gamingHours;
public:
	//constructors
	GamingStudent();//default constructor
	GamingStudent(string n, int a, string c, string p, int s, string gs, int gh);

	//setters
	void setGamingSystem(string g);
	void setGamingHours(int g);

	//getters
	string getGamingSystem();
	int getGamingHours();
};