#include "VelocityComponent.h"


VelocityComponent::VelocityComponent()
{
	m_xVelocity = 0;
	m_yVelocity = 0;
}


VelocityComponent::~VelocityComponent()
{
}


VelocityComponent::VelocityComponent(int xVelocity, int yVelocity)
{
}


int VelocityComponent::GetXVelocity()
{
	return 0;
}


int VelocityComponent::GetYVelocity()
{
	return 0;
}


int VelocityComponent::SetXVelocity(int newXVelocity)
{
	return 0;
}


int VelocityComponent::SetYVelocity(int newYVelocity)
{
	return 0;
}

const char* VelocityComponent::GetComponentType() const
{
	return TYPE;
}