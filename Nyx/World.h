#pragma once

#include "Entity.h"

class World
{
public:
	World(void);
	World(char* bgPath);
	~World(void);
	sf::Sprite& GetImage(void);
private:
	sf::Sprite background;
	sf::Texture bgTex;
};

