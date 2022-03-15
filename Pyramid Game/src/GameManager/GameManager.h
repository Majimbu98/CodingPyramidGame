#pragma once
#include "../UserInterface/UserInterface.h"

class GameManager
{
	
public:

	UserInterface m_Interface;
	int m_levels;
	int m_currentlevel;

	GameManager();
	GameManager(int levels);
	void Run();

private:
	
	void Gameloop();
	void Gameloop(int level);

	void ClassBuild();
	void LevelBuild();
	void InterfaceBuild();

















};

