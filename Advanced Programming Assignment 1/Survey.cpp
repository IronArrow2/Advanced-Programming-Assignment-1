#include "Survey.h"

Survey::Survey()
{
	surveyParticipants = new Student*[500];
}

Survey::Survey(int arraySize)
{
	numParticipants = arraySize;
	surveyParticipants = new Student*[arraySize];
}

Survey::~Survey()
{
	delete[] surveyParticipants;
}


void Survey::process()
{
	//cycle through every element in surveyParticipants
	for (int i = 0; i < numParticipants; i++)
	{

	}
}