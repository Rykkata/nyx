#pragma once
#include "System.h"
#include "VelocityComponent.h"
#include "PositionComponent.h"
class PhysicSystem :
	public System
{
public:
	static PhysicSystem& GetInstance(void);
	~PhysicSystem();
	void Update(PositionComponent position, VelocityComponent velocity, float delta);
private:
	PhysicSystem();
};

