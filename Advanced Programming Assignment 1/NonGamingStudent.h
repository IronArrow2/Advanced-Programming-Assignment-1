#pragma once
#include "Student.h"

class NonGamingStudent : public Student
{
private:
	string streamingService;
	int entertainmentHours;
public:
	//constructors
	NonGamingStudent();
	NonGamingStudent(string n, int a, string c, string p, int s, string ss, int e);

	//setters
	void setStreamingService(string s);
	void setEntertainmentHours(int e);

	//getters
	string getStreamingService();
	int getEntertainmentHours();
};