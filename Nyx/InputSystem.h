#pragma once
#include "System.h"
#include "SFML\Window.hpp"
class InputSystem :
	public System
{
public:
	InputSystem();
	~InputSystem();
	void ReadMessage(sf::Event message);
};

