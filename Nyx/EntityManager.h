#pragma once
#include "Entity.h"
#include <vector>


class EntityManager
{
public:
	EntityManager();
	void AddEntity(Entity* entity);
	Entity* GetEntityByID(int id);
	std::vector<Entity*>& GetEntities(void);
private:
	std::vector<Entity*> entities;
}; 