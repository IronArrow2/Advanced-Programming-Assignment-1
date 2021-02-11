#pragma once
#include <string>
using namespace std;
struct RandomGenerationData
{
	string firstNames[10]{ "Gerald", "Willoughby", "Theresa", "Tabitha", "Tobias", "Estella", "Izuku", "Camille", "Emily", "Louis" };
	string lastNames[10]{"Way", "Willoughby ", "Deroches", "Ingentio", "MacLoughlin", "Bernard", "Midoriya", "Placeholder", "Ramsay", "Charron"};
	string colleges[4]{"George Brown", "Humber", "Seneca", "George Brown"};//the random generation is more likely to pick "George Brown" this way
	string programs[5]{"Game Programming", "Psychology", "Criminology", "Robotics", "Heroics"};
	string gameSystems[4]{"Steam", "Xbox", "PlayStation", "Epic Games"};
	string streamingServices[2]{"Twitch", "YouTube"};
};