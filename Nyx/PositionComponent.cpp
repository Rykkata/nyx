#include "PositionComponent.h"
#include <limits.h>

PositionComponent::PositionComponent()
{
	m_xCoordinate = 0;
	m_yCoordinate = 0;
}


PositionComponent::~PositionComponent()
{
	m_xCoordinate = INT_MIN;
	m_yCoordinate = INT_MIN;
}

PositionComponent::PositionComponent(int xCoordinate, int yCoordinate)
{

}

void PositionComponent::SetXCoordinate(int newXCoordinate)
{
	if (0 <= newXCoordinate)
	{
		m_xCoordinate = newXCoordinate;
	}
}

void PositionComponent::SetYCoordinate(int newYCoordinate)
{
	if (0 <= newYCoordinate)
	{
		m_yCoordinate = newYCoordinate;
	}
}

int PositionComponent::GetXCoordinate(void)
{
	return m_xCoordinate;
}
int PositionComponent::GetYCoordinate(void)
{
	return m_yCoordinate;
}
