#include <iostream>
#include <thread>
#include <windows.h>

using namespace std;

//Mustafa Onat Yýlmaz

void team1()
{
	int dist = 0;
	int sec = 0;
	srand(1);
	while (dist < 400)
	{
		//team1 first flag change
		if (dist >= 98 && dist <= 102)
		{
			sec += 5;
			dist = 103;
		}
		//team1 second flag change
		else if (dist >= 198 && dist <= 202)
		{
			sec += 5;
			dist = 203;
		}
		//team1 third flag change
		else if (dist >= 298 && dist <= 302)
		{
			sec += 5;
			dist = 303;
		}
		else
		{
			sec += 1;
			int speed = 1 + (rand() % 5);
			dist += speed;
			cout << sec << ". sec " << "Team1 Speed: " << speed << " Distance: " << dist << endl;
			Sleep(20);
		}
	}
	Sleep(2000);
	cout << sec << ". sec " << "Team1" << endl;;
}
void team2()
{
	int dist = 0;
	int sec = 0;
	srand(2);
	while (dist < 400)
	{
		//team2 first flag change
		if (dist >= 98 && dist <= 102)
		{
			sec += 5;
			dist = 103;
		}
		//team2 second flag change
		else if (dist >= 198 && dist <= 202)
		{
			sec += 5;
			dist = 203;
		}
		//team2 third flag change
		else if (dist >= 298 && dist <= 302)
		{
			sec += 5;
			dist = 303;
		}
		else
		{
			sec += 1;
			int speed = 1 + (rand() % 5);
			dist += speed;
			cout << sec << ". sec " << "Team2 Speed: " << speed << " Distance: " << dist << endl;
			Sleep(20);
		}
	}
	Sleep(2000);
	cout << sec << ". sec " << "Team2" << endl;;
}
void team3()
{
	int dist = 0;
	int sec = 0;
	srand(3);
	while (dist < 400)
	{
		//team3 first flag change
		if (dist >= 98 && dist <= 102)
		{
			sec += 5;
			dist = 103;
		}
		//team3 second flag change
		else if (dist >= 198 && dist <= 202)
		{
			sec += 5;
			dist = 203;
		}
		//team3 third flag change
		else if (dist >= 298 && dist <= 302)
		{
			sec += 5;
			dist = 303;
		}
		else
		{
			sec += 1;
			int speed = 1 + (rand() % 5);
			dist += speed;
			cout << sec << ". sec " << "Team3 Speed: " << speed << " Distance: " << dist << endl;
			Sleep(20);
		}
	}
	Sleep(2000);
	cout << sec << ". sec " << "Team3" << endl;;
}
void team4()
{
	int dist = 0;
	int sec = 0;
	srand(4);
	while (dist < 400)
	{
		//team4 first flag change
		if (dist >= 98 && dist <= 102)
		{
			sec += 5;
			dist = 103;
		}
		//team4 second flag change
		else if (dist >= 198 && dist <= 202)
		{
			sec += 5;
			dist = 203;
		}
		//team4 third flag change
		else if (dist >= 298 && dist <= 302)
		{
			sec += 5;
			dist = 303;
		}
		else
		{
			sec += 1;
			int speed = 1 + (rand() % 5);
			dist += speed;
			cout << sec << ". sec " << "Team4 Speed: " << speed << " Distance: " << dist << endl;
			Sleep(20);
		}
	}
	Sleep(2000);
	cout << sec << ". sec " << "Team4" << endl;;

}
void finish()
{
	Sleep(5000);
	cout << "Results:" << endl;;
}

int main()
{
	thread start1(team1);
	thread start2(team2);
	thread start3(team3);
	thread start4(team4);
	thread result(finish);
	start1.join();
	start2.join();
	start3.join();
	start4.join();
	result.join();
	return 0;
}