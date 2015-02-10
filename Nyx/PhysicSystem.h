#pragma once
#include "System.h"
#include "VelocityComponent.h"
#include "PositionComponent.h"
class PhysicSystem :
	public System
{
public:
	PhysicSystem();
	~PhysicSystem();
	void Update(PositionComponent position, VelocityComponent velocity, float delta);
};

