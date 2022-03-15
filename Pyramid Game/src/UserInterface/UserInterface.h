#pragma once
#include <string>
using namespace std;

class UserInterface
{
private:

	string m_a;
	string m_b;
	string m_c;
	string m_d;
	string m_e;
	
	
	string m_space;
	string m_sxspace;
	string m_NormalAngle;
	string m_OppositeAngle;
	string m_Brick;

	void GoToHead(int turn);
	void PrintSpace(string m_space);
	void Printsxspace(string m_sxspace);
	void PrintNormalAngle(string m_NormalAngle);
	void PrintOppositeAngle(string m_OppositeAngle);
	void PrintBrick(string m_Brick);
	void SomethingIsWriting(string phrase);
	
public:
	UserInterface();
	UserInterface(string a,string b,string c,string d,string e);

	void ShowIntroduction();

	//Return a Map from an interface created by a map builder
	void ShowClassicPyramid();
	void ShowEgyptianPyramid();
	void ShowMayaPyramid();
	void ShowTowerPyramid();
	
	void ShowMenù();
	void ShowMap();
	void ShowLevel();
	void ShowPlayer();
	void ShowEnemy();

};

