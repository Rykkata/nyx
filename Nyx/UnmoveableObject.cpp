#include "UnmoveableObject.h"


UnmoveableObject::UnmoveableObject(int id) : Entity(id)
{
}

UnmoveableObject::UnmoveableObject(int id, char* spritePath) : Entity(id)
{

}

UnmoveableObject::~UnmoveableObject(void)
{
}

void UnmoveableObject::Update(void)
{
}

void UnmoveableObject::LoadSprite(char * path)
{
}

sf::Sprite& UnmoveableObject::GetSprite(void)
{
	return m_Sprite;
}

bool UnmoveableObject::CollideWith(Entity& otherEntity)
{
	return false;
}