#pragma once

#include <SFML\Graphics.hpp>
#include <unordered_map>
#include "Component.h"

class Entity
{
public:
	Entity(int id);
	virtual ~Entity(void);
	int ID()const{return m_ID;}
	void AddComponent(Component* newComponent);
private:
	int m_ID;
	void SetID(int ID);
	std::unordered_map<char*, Component*> m_components;
};

