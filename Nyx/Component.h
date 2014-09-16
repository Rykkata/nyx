#pragma once

class Component
{
public:
	Component();
	~Component();
	const virtual char* GetComponentType(void) const = 0;
	virtual void Update(void) = 0;
};

