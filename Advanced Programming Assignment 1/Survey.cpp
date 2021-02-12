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
	cout << numStudents << " " << totalAge;
	averageAge = totalAge / numStudents;
	cout << averageAge;
	return averageAge;
}

string Survey::preferredEntertainment(bool mode)
{//mode should be true if object is type GamingStudent and false if type NonGamingStudent
	int optionOneTotal = 0;
	int optionTwoTotal = 0;
	int optionThreeTotal = 0;
	int optionFourTotal = 0;
	string preferredEntertainment;
	if (mode == true)
	{
		for (int i = 0; i < numParticipants; i++)
		{
			if (surveyParticipants[i]->isGamingStudent == mode)
			{
				if (static_cast<GamingStudent*>(surveyParticipants[i])->getGamingSystem() == "Steam")
				{
					optionOneTotal++;
				}
				else if (static_cast<GamingStudent*>(surveyParticipants[i])->getGamingSystem() == "Xbox")
				{
					optionTwoTotal++;
				}
				else if (static_cast<GamingStudent*>(surveyParticipants[i])->getGamingSystem() == "Playstation")
				{
					optionThreeTotal++;
				}
				else if (static_cast<GamingStudent*>(surveyParticipants[i])->getGamingSystem() == "Epic Games")
				{
					optionFourTotal++;
				}
			}
		}


	}
	if (mode == false)
	{
		for (int i = 0; i < numParticipants; i++)
		{
			if (surveyParticipants[i]->isGamingStudent == mode)
			{
				if (static_cast<NonGamingStudent*>(surveyParticipants[i])->getStreamingService() == "Twitch")
				{
					optionOneTotal++;
				}
				else if (static_cast<NonGamingStudent*>(surveyParticipants[i])->getStreamingService() == "YouTube")
				{
					optionTwoTotal++;
				}
			}
		}

		if (optionOneTotal == optionTwoTotal)
		{
			preferredEntertainment = "Tie!";
		}
		else if (optionOneTotal > optionTwoTotal)
		{
			preferredEntertainment = "Twitch";
		}
		else
		{
			preferredEntertainment = "YouTube";
		}
	}
	return preferredEntertainment;
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
	cout << averageHours;
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