#pragma once//abstract class
#include <string>
using namespace std;

class Person
{
protected:
	string name;
	int age;
public:
	virtual void setName(string n) = 0;
	virtual void setAge(int i) = 0;

	virtual string getName() = 0;
	virtual int getAge() = 0;
};
