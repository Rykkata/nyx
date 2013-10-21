#include "World.h"


World::World(void)
{
	background = sf::Sprite();
}

World::World(char* bgPath)
{
	bgTex = sf::Texture();
	bgTex.setSmooth(true);
	bgTex.loadFromFile(bgPath);
	background = sf::Sprite(bgTex);
}

World::~World(void)
{

}

sf::Sprite& World::GetImage(void)
{
	return background;
}


