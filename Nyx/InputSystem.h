#pragma once
#include "System.h"
#include "SFML\Window.hpp"
class InputSystem :
	public System
{
public:
	static InputSystem& GetInstance(void);
	~InputSystem();
	void ReadMessage(sf::Event message);
private:
	InputSystem();
};

