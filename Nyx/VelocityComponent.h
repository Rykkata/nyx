#pragma once
#include "Component.h"
class VelocityComponent :
	public Component
{
public:
	VelocityComponent();
	~VelocityComponent();
private:
	int m_xVelocity;
	int m_yVelocity;
public:
	VelocityComponent(int xVelocity, int yVelocity);
	int GetXVelocity();
	int GetYVelocity();
	int SetXVelocity(int newXVelocity);
	int SetYVelocity(int newYVelocity);
};

