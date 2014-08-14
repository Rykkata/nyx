#include "Scene.h"


Scene::Scene(void)
{
	background = sf::Sprite();
}

Scene::Scene(char* bgPath)
{
	bgTex = sf::Texture();
	bgTex.setSmooth(true);
	bgTex.loadFromFile(bgPath);
	background = sf::Sprite(bgTex);
}

Scene::~Scene(void)
{

}

sf::Sprite& Scene::GetImage(void)
{
	return background;
}


