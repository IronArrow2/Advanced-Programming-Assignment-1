#include "Student.h"

Student::Student()
{
	name = "";
	age = 0;
	college = "";
	program = "";
	semester = 0;
}

Student::Student(string n, int a, string c, string p, int s)
{
	name = n;
	age = a;
	college = c;
	program = p;
	semester = s;
}

void Student::setName(string n)
{
	name = n;
}

void Student::setAge(int a)
{
	age = a;
}

void Student::setCollege(string c)
{
	college = c;
}

void Student::setProgram(string p)
{
	program = p;
}

void Student::setSemester(int s)
{
	semester = s;
}

string Student::getName()
{
	return name;
}

int Student::getAge()
{
	return age;
}

string Student::getCollege()
{
	return college;
}

string Student::getProgram()
{
	return program;
}

int Student::getSemester()
{
	return semester;
}
