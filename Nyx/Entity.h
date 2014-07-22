#pragma once

#include <SFML\Graphics.hpp>
#include "State.h"
class Entity
{
public:
	Entity(int id);
	virtual ~Entity(void);
	virtual void LoadSprite(char * image) = 0;
	virtual void Update(void) = 0;
	virtual sf::Sprite& GetSprite(void) = 0;
	virtual bool CollideWith(Entity& otherEntity) = 0;
	int ID()const{return m_ID;}
protected:
	sf::Vector2f m_pos;
	int m_width;
	int m_height;
private:
	int m_ID;
	static int m_iNextValidID;
	void SetID(int ID);
};

