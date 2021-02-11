#pragma once
#include "Person.h"

class Student : public Person
{
protected:
	string college;
	string program;
	int semester;
public:
	bool isGamingStudent;
	//constructors
	Student();
	Student(string n, int a, string c, string p, int s);

	//setters
	void setName(string n);
	void setAge(int a);
	void setCollege(string c);
	void setProgram(string p);
	void setSemester(int s);

	//getters
	string getName();
	int getAge();
	string getCollege();
	string getProgram();
	int getSemester();
};