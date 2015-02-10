#include "RenderSystem.h"


RenderSystem::RenderSystem()
{
}


RenderSystem::~RenderSystem()
{
}

/*
* Takes the position provided by the position component
* Updates the graphic component sprite appropriately
* Renders the graphic to the render window
*/
int RenderSystem::Update(GraphicComponent graphic, PositionComponent position, sf::RenderWindow renderWindow)
{
	graphic.GetGraphic()->setPosition(position.GetXCoordinate(), position.GetYCoordinate());
	renderWindow.draw(*graphic.GetGraphic());
}