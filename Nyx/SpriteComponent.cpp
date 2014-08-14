#include "SpriteComponent.h"


SpriteComponent::SpriteComponent()
{
	m_spriteGraphic = new sf::Sprite();
}


SpriteComponent::~SpriteComponent()
{
	delete m_spriteGraphic;
}


sf::Sprite* SpriteComponent::GetSpriteGraphic()
{
	return m_spriteGraphic;
}


void SpriteComponent::SetSpriteGraphic(sf::Sprite* newSpriteGraphic)
{
	if (newSpriteGraphic != NULL)
	{
		m_spriteGraphic = newSpriteGraphic;
	}
}

void SpriteComponent::LoadSpriteGraphicFromFilePath(const char* filePath)
{
	sf::Texture texture = sf::Texture();
	texture.setSmooth(true);
	texture.loadFromFile(filePath);
	m_spriteGraphic = &sf::Sprite(texture);
}

const char* SpriteComponent::GetComponentType() const
{
	return TYPE;
}