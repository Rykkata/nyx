#include "GraphicComponent.h"


GraphicComponent::GraphicComponent()
{
	m_spriteGraphic = new sf::Sprite();
}


GraphicComponent::~GraphicComponent()
{
	delete m_spriteGraphic;
}


sf::Sprite* GraphicComponent::GetGraphic()
{
	return m_spriteGraphic;
}


void GraphicComponent::SetSpriteGraphic(sf::Sprite* newSpriteGraphic)
{
	if (newSpriteGraphic != NULL)
	{
		m_spriteGraphic = newSpriteGraphic;
	}
}

void GraphicComponent::LoadSpriteGraphicFromFilePath(const char* filePath)
{
	sf::Texture texture = sf::Texture();
	texture.setSmooth(true);
	texture.loadFromFile(filePath);
	m_spriteGraphic = &sf::Sprite(texture);
}

const char* GraphicComponent::GetComponentType() const
{
	return TYPE;
}