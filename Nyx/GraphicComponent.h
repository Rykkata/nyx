#pragma once
#include "Component.h"
#include <SFML\Graphics.hpp>
// Commnets
class GraphicComponent :
	public Component
{
public:
	GraphicComponent();
	~GraphicComponent();
	sf::Sprite* GetGraphic();
	void SetSpriteGraphic(sf::Sprite* newSpriteGraphic);
	void LoadSpriteGraphicFromFilePath(const char* filePath);
	const virtual char* GetComponentType(void) const;
	virtual void Update(void);
private:
	sf::Sprite* m_spriteGraphic;
	const char* TYPE = "SpriteComponent";
};

