#pragma once

class Component
{
public:
	Component();
	~Component();
	const virtual char* GetComponentType(void) const = 0;
	// TODO (Nick): Do we actually need this?
	void Update(void);
};

