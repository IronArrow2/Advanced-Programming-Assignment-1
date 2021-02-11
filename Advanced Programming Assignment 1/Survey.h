#pragma once
#include "Student.h"

class Survey
{
private:
	int numParticipants;
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

	//other functions

};