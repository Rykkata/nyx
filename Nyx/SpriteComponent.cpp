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
