#pragma once
#include "Component.h"
#include <string>
class VelocityComponent :
	public Component
{
public:
	VelocityComponent();
	~VelocityComponent();
private:
	int m_xVelocity;
	int m_yVelocity;
	const char* TYPE = "VelocityComponent";
public:
	VelocityComponent(int xVelocity, int yVelocity);
	int GetXVelocity();
	int GetYVelocity();
	int SetXVelocity(int newXVelocity);
	int SetYVelocity(int newYVelocity);
	const virtual char* GetComponentType(void) const;
};

