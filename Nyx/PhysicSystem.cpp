#include "PhysicSystem.h"


PhysicSystem::PhysicSystem()
{
}


PhysicSystem::~PhysicSystem()
{
}

void PhysicSystem::Update(PositionComponent position, VelocityComponent velocity, float delta)
{
	int newX = position.GetXCoordinate() + velocity.GetXVelocity* delta;
	int newY = position.GetYCoordinate() + velocity.GetYVelocity* delta;

	position.SetXCoordinate(newX);
	position.SetYCoordinate(newY);
}