#pragma once
#include "Entity.h"
#include <vector>


class EntityManager
{
public:
	static EntityManager& GetInstance(void);
	~EntityManager();
	void AddEntity(Entity* entity);
	Entity* GetEntityByID(int id);
	std::vector<Entity*>& GetEntities(void);
private:
	EntityManager();
	std::vector<Entity*> entities;
}; 