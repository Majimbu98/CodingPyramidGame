#include <iostream>
#include <chrono>
#include <thread>
#include "UserInterface.h"

using namespace std;
using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
using std::chrono::system_clock;






void UserInterface::GoToHead(int turn)
{
	for (int i = 0; i < turn; i++)
	{
		cout << endl;
	}
}

void UserInterface::PrintSpace(string m_space)
{

}

void UserInterface::Printsxspace(string m_sxspace)
{
}

void UserInterface::PrintNormalAngle(string m_NormalAngle)
{
}

void UserInterface::PrintOppositeAngle(string OppositeAngle)
{
}

void UserInterface::PrintBrick(string m_Brick)
{
}

void UserInterface::SomethingIsWriting(string phrase)
{
	for (int i = 0; i < strlen(phrase.c_str()); i++)
	{
		cout << phrase[i];
		sleep_for(1ms);
	}
}

UserInterface::UserInterface()
{
	m_a = "                                             Welcome to the Pyramid game";
	m_b = "In this game I will show you a pyramid made up of some floors...";
	m_c = "Each horizontal floor has an increasing prime numbers of bricks";
	m_d = "Every turn the player or the machine will remove as many bricks as they like from an horizontal floor of their choice.";
	m_e = "Whoever eliminates the last brick of the game, loses";

	m_space = " ";
	m_sxspace = m_space;
	m_NormalAngle = "/";
	m_OppositeAngle="\ ";
	m_Brick = "*";
}

UserInterface::UserInterface(string a, string b, string c, string d, string e)
{
	m_a = a;
	m_b = b;
	m_c = c;
	m_d = d;
	m_e = e;
}


void UserInterface::ShowIntroduction()
{

	GoToHead(4);
	SomethingIsWriting(m_a);
	sleep_for(5s);

	GoToHead(6);
	SomethingIsWriting(m_b);
	sleep_for(9s);

	GoToHead(2);
	SomethingIsWriting(m_c);
	sleep_for(9s);

	GoToHead(2);
	SomethingIsWriting(m_d);
	sleep_for(5s);

	GoToHead(2);
	SomethingIsWriting(m_e);
	sleep_for(5s);
	
}

void UserInterface::ShowClassicPyramid()
{

	
		short int sxspace = 57;
		short int middlespace = 0;
		string NormalAngle = "/";
		string OppositeAngle = "\ ";

		for (int i = 0; i < 7; i++)

			cout << "                                                         /\ ";

		cout << "                                                        /  \ ";
	
}


void UserInterface::ShowEgyptianPyramid()
{
}

void UserInterface::ShowMayaPyramid()
{
}

void UserInterface::ShowTowerPyramid()
{

}

void UserInterface::ShowMenù()
{
}

void UserInterface::ShowMap()
{

}

void UserInterface::ShowLevel()
{

}

void UserInterface::ShowPlayer()
{
}

void UserInterface::ShowEnemy()
{
}


