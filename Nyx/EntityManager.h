#pragma once
#include "Entity.h"

class EntityManager
{
public:
	static EntityManager& GetInstance(void);
	void AddEntity(Entity* entity);
	Entity* GetEntityByID(int id);
	vector<Entity*>& GetEntities(void);
	void UpdateEntities(void);
private:
	EntityManager(){}
	EntityManager(EntityManager const& copy){}
	EntityManager& operator=(EntityManager const& copy){}
	vector<Entity*> entities;
}; 