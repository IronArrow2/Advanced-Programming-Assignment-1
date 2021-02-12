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
	if (numStudents == 0)
	{
		averageAge = totalAge / 1;
	}
	else
	{
		averageAge = totalAge / numStudents;
	}
	return averageAge;
}

string Survey::preferredEntertainment(bool mode)
{//mode should be true if object is type GamingStudent and false if type NonGamingStudent
	int options[4]{0, 0, 0, 0};
	int x = 0;
	int y = 0;
	string preferredEntertainment;

	if (mode == true)
	{
		for (int i = 0; i < numParticipants; i++)
		{
			if (surveyParticipants[i]->isGamingStudent == mode)
			{
				if (static_cast<GamingStudent*>(surveyParticipants[i])->getGamingSystem() == "Steam")
				{
					options[0]++;
				}
				else if (static_cast<GamingStudent*>(surveyParticipants[i])->getGamingSystem() == "Xbox")
				{
					options[1]++;
				}
				else if (static_cast<GamingStudent*>(surveyParticipants[i])->getGamingSystem() == "Playstation")
				{
					options[2]++;
				}
				else if (static_cast<GamingStudent*>(surveyParticipants[i])->getGamingSystem() == "Epic Games")
				{
					options[3]++;
				}
			}
		}

		for (int i = 0; i < 4; i++)
		{
			if (options[i] > x)
			{
				x = options[i];
				y = i;
			}
		}
		if (y == 0)
		{
			preferredEntertainment = "Steam";
		}
		if (y == 1)
		{
			preferredEntertainment = "Xbox";
		}
		if (y == 2)
		{
			preferredEntertainment = "Playstation";
		}
		if (y == 3)
		{
			preferredEntertainment = "Epic Games";
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
					options[0]++;
				}
				else if (static_cast<NonGamingStudent*>(surveyParticipants[i])->getStreamingService() == "YouTube")
				{
					options[1]++;
				}
			}
		}

		if (options[0] == options[1])
		{
			preferredEntertainment = "Tie!";
		}
		else if (options[0] > options[1])
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
	if (numStudents == 0)
	{
		averageHours = totalHours / 1;
	}
	else
	{
		averageHours = totalHours / numStudents;
	}

	return averageHours;
}

int Survey::getNumStudentsByType(bool mode)
{
	int numStudents = 0;
	for (int i = 0; i < numParticipants; i++)
	{
		if (surveyParticipants[i]->isGamingStudent == mode)
		{
			numStudents++;
		}
	}
	return numStudents;
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
	string output = "Number of Non-Gaming Students: ";
	//find number of NonGamingStudents
	output = output + to_string(getNumStudentsByType(false)) + ", average age: ";
	//find average age of NonGamingStudents
	output = output + to_string(averageAge(false)) + ", most used streaming service: ";
	//find preferred streaming service of NonGamingStudents
	output = output + preferredEntertainment(false) + ", average hours spent watching streams weekly: ";
	//find average hours streaming of NonGamingStudents
	output = output + to_string(averageEntertainmentHours(false)) + "\nNumber of Gaming Students: ";
	//find number of GamingStudents
	output = output + to_string(getNumStudentsByType(true)) + ", average age: ";
	//find average age of GamingStudents
	output = output + to_string(averageAge(true)) + ", most used game platform: ";
	//find preferred gaming platform of GamingStudents
	output = output + preferredEntertainment(true) + ", average hours spent gaming weekly: ";
	//find average hours gaming of GamingStudents
	output = output + to_string(averageEntertainmentHours(true)) + "\n";
	//assemble information and print to console
	cout << output;
}