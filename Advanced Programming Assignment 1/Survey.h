#pragma once
#include "Student.h"
#include "GamingStudent.h"
#include "NonGamingStudent.h"

class Survey
{
private:
	int numParticipants;

	//all these functions will operate differently depending on what bool value is passe to them
	int averageAge(bool mode);
	string preferredEntertainment(bool mode);
	int averageEntertainmentHours(bool mode);
public:
	//constructors
	Survey();
	Survey(int arraySize);

	//destructor
	~Survey();

	Student** surveyParticipants;

	//process function
	void process();
	/*process() uses the surveyParticipants array to calculate and print following information to screen:
	*Number of non gaming students
	*	Average age
	*	Most preferred streaming service
	*	Average hours spent consuming non gaming entertainment
	*Number of gaming students
	*	Average age
	*	Most preferred gaming device
	*	Average hours spent consuming gaming entertainment*/
};