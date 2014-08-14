#include "EntityManager.h"
using namespace std;

EntityManager::EntityManager()
{
	entities = std::vector<Entity*>();
}

void EntityManager::AddEntity(Entity* entity)
{
	entities.push_back(entity);
}

Entity* EntityManager::GetEntityByID(int ID)
{
	vector<Entity*>::iterator it = entities.begin();
	for(; it != entities.end(); ++it)
	{
		if((*it)->ID() == ID)
			return (*it);
	}

	return NULL;
}

std::vector<Entity*>& EntityManager::GetEntities(void)
{
	return entities;
}