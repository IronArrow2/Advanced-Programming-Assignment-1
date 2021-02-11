#include "GamingStudent.h"

GamingStudent::GamingStudent()
{
	name = "";
	age = 0;
	college = "";
	program = "";
	semester = 0;
	gamingSystem = "";
	gamingHours = 0;
	isGamingStudent = true;
}

GamingStudent::GamingStudent(string n, int a, string c, string p, int s, string gs, int gh)
{
	name = n;
	age = a;
	college = c;
	program = p;
	semester = s;
	gamingSystem = gs;
	gamingHours = gh;
	isGamingStudent = true;
}
void GamingStudent::setGamingSystem(string g)
{
	gamingSystem = g;
}

void GamingStudent::setGamingHours(int g)
{
	gamingHours = g;
}

string GamingStudent::getGamingSystem()
{
	return gamingSystem;
}

int GamingStudent::getGamingHours()
{
	return gamingHours;
}
