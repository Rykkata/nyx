#pragma once
#include "System.h"
#include "GraphicComponent.h"
#include "PositionComponent.h"
#include "SFML\Window.hpp"
class RenderSystem :
	public System
{
public:
	static RenderSystem& GetInstance(void);
	~RenderSystem();
	int Update(GraphicComponent graphic, PositionComponent position, sf::RenderWindow renderWindow);
private:
	RenderSystem();
};

