#pragma once

#include <SFML\Graphics.hpp>
#include "State.h"
#include <unordered_map>
class Component;

class Entity
{
public:
	Entity(int id);
	virtual ~Entity(void);
	int ID()const{return m_ID;}
private:
	int m_ID;
	void SetID(int ID);
};

