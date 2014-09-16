
#pragma once
#include "Component.h"


enum ENTITY_TYPE {PLAYER};

// Commnets
class InputComponent :
	public Component
{
public:
  InputComponent();
  ~InputComponent();
  void SetEntityType(int entityType);
  void HandleInput();
  void HandlePlayerInput();
private:
  char* m_inputMessage;
  ENTITY_TYPE m_entityType;
}
