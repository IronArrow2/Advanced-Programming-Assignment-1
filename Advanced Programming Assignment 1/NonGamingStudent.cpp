#include "NonGamingStudent.h"

NonGamingStudent::NonGamingStudent()
{
	name = "";
	age = 0;
	college = "";
	program = "";
	semester = 0;
	streamingService = "";
	entertainmentHours = 0;
	isGamingStudent = false;
}

NonGamingStudent::NonGamingStudent(string n, int a, string c, string p, int s, string ss, int e)
{
	name = n;
	age = a;
	college = c;
	program = p;
	semester = s;
	streamingService = ss;
	entertainmentHours = e;
	isGamingStudent = false;
}

void NonGamingStudent::setStreamingService(string s)
{
	streamingService = s;
}

void NonGamingStudent::setEntertainmentHours(int e)
{
	entertainmentHours = e;
}

string NonGamingStudent::getStreamingService()
{
	return streamingService;
}

int NonGamingStudent::getEntertainmentHours()
{
	return entertainmentHours;
}
