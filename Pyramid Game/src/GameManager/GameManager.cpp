#include "GameManager.h"

GameManager::GameManager()
{
	m_levels = 3;

}

GameManager::GameManager(int levels)
{
	m_levels = levels;
}

void GameManager::Run()
{
	ClassBuild();
	m_Interface.ShowIntroduction();
	Gameloop();
	//Credits
	
}

void GameManager::Gameloop()
{
	while (true)
	{
		//Menù--->choose modality, or lose
		//if(modality is choosen)
		{
			Gameloop(m_currentlevel);
		}
	}
}

void GameManager::Gameloop(int level)
{
    while (true)
    {
		//Time()
		//Verify if win/lose/continue
        //Input
        //Update
        //Show
    }
}

void GameManager::ClassBuild()
{
	LevelBuild();
	InterfaceBuild();


}

void GameManager::LevelBuild()
{

}

void GameManager::InterfaceBuild()
{
	UserInterface Interface;
	m_Interface = Interface;

}

