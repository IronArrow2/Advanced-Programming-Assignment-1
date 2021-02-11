#include <iostream>
#include <string>
#include <time.h>
#include <random>
#include "Survey.h"
#include "Student.h"
#include "GamingStudent.h"
#include "NonGamingStudent.h"
#include "RandomGenerationData.h"
using namespace std;
/*Advanced Programming Assignment 1 To-Do List
*Create following classes:
*Person (abstract base class): string name, int age
*Student (subclass of Person): string college, string program, int semester
*NonGamingStudent (subclass of Student): string streamingService, int entertainmentHours
*GamingStudent (subclass of Student): string gamingDevice, int gamingHours
*Survey (class): Student* surveyParticipants[], process function
*main method that asks the user how many students participate in the survey (max 500), then generates them randomly, 
stores them in Survey, then uses process() on the array and displays the results*/

int main()
{
	srand(time(NULL));
	string input;
	int numParticipants;
	string randomFirstName, randomLastName, randomName, randomCollege, randomProgram, randomGameSystem, randomStreamingService;
	int randomAge, randomSemester, randomHoursGaming, randomHoursStreaming, randomStudentType;
	RandomGenerationData data;
	Survey* collegeSurvey;

	cout << "Please enter the number of participants in the survey: ";
	do 
	{
		getline(cin, input);
		numParticipants = stoi(input);
		if (numParticipants < 2)
		{
			cout << "Too few participants" << endl;
		}
		if (numParticipants > 500)
		{
			cout << "Too many participants, must be less than 500" << endl;
		}
	} while (numParticipants < 2 || numParticipants > 500);
	
	collegeSurvey = new Survey(numParticipants);

	for (int i = 0; i < numParticipants; i++)
	{//generates random Students and puts them into the Survey class
		//decide what type of student this is (Gaming or NonGaming)
		randomStudentType = rand() % 2 + 1;
		if (randomStudentType == 1)
		{
			collegeSurvey->surveyParticipants[i] = new NonGamingStudent();
			//if NonGaming, generate streaming service...
			randomStreamingService = data.streamingServices[rand() % 1];
			static_cast<NonGamingStudent*>(collegeSurvey->surveyParticipants[i])->setStreamingService(randomStreamingService);
			//...and hours spent consuming media (weekly, 1-80)
			randomHoursStreaming = rand() % 80 + 1;
			static_cast<NonGamingStudent*>(collegeSurvey->surveyParticipants[i])->setEntertainmentHours(randomHoursStreaming);

			collegeSurvey->surveyParticipants[i]->isGamingStudent = false;
		}
		else if (randomStudentType == 2)
		{
			collegeSurvey->surveyParticipants[i] = new GamingStudent();
			//if Gaming, generate gaming device...
			randomGameSystem = data.gameSystems[rand() % 3];
			static_cast<GamingStudent*>(collegeSurvey->surveyParticipants[i])->setGamingSystem(randomGameSystem);
			//..and hours spent gaming (weekly, 1-80)
			randomHoursGaming = rand() % 80 + 1;
			static_cast<GamingStudent*>(collegeSurvey->surveyParticipants[i])->setGamingHours(randomHoursGaming);

			collegeSurvey->surveyParticipants[i]->isGamingStudent = true;
		}
		//generate random name
		randomFirstName = data.firstNames[rand() % 9];
		randomLastName = data.lastNames[rand() % 9];
		randomName = randomFirstName + " " + randomLastName;
		collegeSurvey->surveyParticipants[i]->setName(randomName);
		//generate random age (18-30)
		randomAge = rand() % 30 + 18;
		collegeSurvey->surveyParticipants[i]->setAge(randomAge);
		//generate random college
		randomCollege = data.colleges[rand() % 3];
		collegeSurvey->surveyParticipants[i]->setCollege(randomCollege);
		//generate random program
		randomProgram = data.programs[rand() % 4];
		collegeSurvey->surveyParticipants[i]->setProgram(randomProgram);
		//generate random semester (1-6)
		randomSemester = rand() % 6 + 1;
		collegeSurvey->surveyParticipants[i]->setSemester(randomSemester);
	}

	//use process()
	collegeSurvey->process();

	return 0;
}