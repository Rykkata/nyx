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
	void LoadSpriteGraphicFromFilePath(const char* filePath);
	const virtual char* GetComponentType(void) const;
private:
	sf::Sprite* m_spriteGraphic;
	const char* TYPE = "SpriteComponent";
};

