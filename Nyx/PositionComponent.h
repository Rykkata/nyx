#pragma once
#include "Component.h"
class PositionComponent :
	public Component
{
public:
	PositionComponent();
	~PositionComponent();
	PositionComponent(int xCoordinate, int yCoordinate);

	void SetXCoordinate(int newXCoordinate);
	void SetYCoordinate(int newYCoordinate);

	int GetXCoordinate(void);
	int GetYCoordinate(void);
	
private:
	int m_xCoordinate;
	int m_yCoordinate;
};

