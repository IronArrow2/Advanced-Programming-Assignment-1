#include "Survey.h"

int Survey::averageAge(bool mode)
{//mode should be true if object is type GamingStudent and false if type NonGamingStudent
	int totalAge = 0;
	int numStudents = 0;
	int averageAge = 0;
	for (int i = 0; i < numParticipants; i++)
	{
		if (surveyParticipants[i]->isGamingStudent == mode)
		{
			totalAge = totalAge + surveyParticipants[i]->getAge();
			numStudents++;
		}
	}
	averageAge = totalAge / numStudents;
	return averageAge;
}

string Survey::preferredEntertainment(bool mode)
{
	return "";
}

int Survey::averageEntertainmentHours(bool mode)
{//mode should be true if object is type GamingStudent and false if type NonGamingStudent
	int totalHours = 0;
	int numStudents = 0;
	int averageHours = 0;
	if (mode == true)
	{
		for (int i = 0; i < numParticipants; i++)
		{
			if (surveyParticipants[i]->isGamingStudent == mode)
			{
				totalHours = totalHours + static_cast<GamingStudent*>(surveyParticipants[i])->getGamingHours();
				numStudents++;
			}
		}
	}
	else if (mode == false)
	{
		for (int i = 0; i < numParticipants; i++)
		{
			if (surveyParticipants[i]->isGamingStudent == mode)
			{
				totalHours = totalHours + static_cast<NonGamingStudent*>(surveyParticipants[i])->getEntertainmentHours();
				numStudents++;
			}
		}
	}
	averageHours = totalHours / numStudents;
	return averageHours;
}

Survey::Survey()
{
	numParticipants = 500;
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
	//find average age of NonGamingStudents

	//find preferred streaming service of NonGamingStudents

	//find average hours streaming of NonGamingStudents

	//find average age of GamingStudents

	//find preferred gaming playtform of GamingStudents

	//find average hours gaming of GamingStudents

}