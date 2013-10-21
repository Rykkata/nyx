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
	if(var >= m_iNextValidID)
	{
		m_ID = var;
		++m_iNextValidID;
	}
	else
	{
		m_ID = m_iNextValidID++;
	}
}

int Entity::m_iNextValidID = 0;
