#include "EntityManager.h"
using namespace std;
EntityManager& EntityManager::GetInstance(void)
{
	static EntityManager instance;
	
	return instance;
}

void EntityManager::AddEntity(Entity* entity)
{
	entities.push_back(entity);
}

void EntityManager::UpdateEntities(void)
{
	vector<Entity*>::iterator it = entities.begin();
	for(; it != entities.end(); ++it)
	{
		(*it)->Update();
	}
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