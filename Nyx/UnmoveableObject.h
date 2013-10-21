#pragma once
#include "entity.h"
class UnmoveableObject :
	public Entity
{
public:
	UnmoveableObject(int id);
	UnmoveableObject(int id, char* spritePath);
	~UnmoveableObject(void);
	void LoadSprite(char* path);
	void Update(void);
	sf::Sprite& GetSprite(void);
	bool CollideWith(Entity& otherEntity);
private:
	sf::Sprite m_Sprite;
	sf::Texture m_Texture;
	sf::Vector2f m_Position;
};

