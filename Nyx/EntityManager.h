#pragma once
#include "Entity.h"
#include <vector>


class EntityManager
{
public:
	static EntityManager& GetInstance(void);
	void AddEntity(Entity* entity);
	Entity* GetEntityByID(int id);
	std::vector<Entity*>& GetEntities(void);
	void UpdateEntities(void);
private:
	EntityManager(){}
	EntityManager(EntityManager const& copy){}
	EntityManager& operator=(EntityManager const& copy){}
	std::vector<Entity*> entities;
}; 