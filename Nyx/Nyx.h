#pragma once

#include <SFML\Graphics.hpp>
#include "iniFile.h"
#include "Player.h"
#include "World.h"
#include "Utility.h"
#include "EntityManager.h"
#include "steam_api.h"

using namespace std;

class Nyx
{
public:
	static Nyx& GetInstance(void);
	~Nyx();
	void RunGame(void);
private:
	Nyx(){}
	Nyx(Nyx const& copy){}
	Nyx& operator=(Nyx const& copy){}
	void createINIFile(void);
	void renderEntities(sf::RenderWindow * window);
	void updateEntities(void);
	void updateGame(sf::Time elapsed);
	void init(void);

	sf::VideoMode currentMode;
	sf::Clock gameClock;
	sf::Time seconds;
	sf::Time tick;
	int frames;
	int ticks;
	std::vector<sf::VideoMode> fullScreens;
	bool isFullScreen;
	CIniFile * iniFile;

	Player* player;
	World* curWorld;
};