#include "Entity.h"


Entity::Entity(int id)
{
	SetID(id);
}


Entity::~Entity(void)
{

}

void Entity::SetID(int var)
{
	m_ID = var;
}

