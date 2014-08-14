#pragma once

#include "EntityManager.h"
#include "GraphicComponent.h"
#include "PositionComponent.h"
class Scene
{
public:
	Scene(void);
	Scene(char* bgPath);
	~Scene(void);
	sf::Sprite& GetImage(void);
private:
	EntityManager m_entities;
	sf::Texture bgTex;
	sf::Sprite background;
};

