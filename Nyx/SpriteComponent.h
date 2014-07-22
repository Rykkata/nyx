#pragma once
#include "Component.h"
#include <SFML\Graphics.hpp>
class SpriteComponent :
	public Component
{
public:
	SpriteComponent();
	~SpriteComponent();
	sf::Sprite* GetSpriteGraphic();
	void SetSpriteGraphic(sf::Sprite* newSpriteGraphic);
private:
	sf::Sprite* m_spriteGraphic;
};

