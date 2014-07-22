#pragma once
#include "Entity.h"
#include "Xbox360.h"

#define MAX_HEALTH 100
#define MOVEMENT 5

class Player :
	public Entity
{
public:
	Player(int id);
	Player(int id, float x, float y, char * image, int screenWidth, int screenHeight);
	~Player(void);
	
	sf::Sprite& GetSprite(void);
	void LoadSprite(char* path);
	bool CollideWith(Entity& otherEntity);
	void SetX(float x);
	void SetY(float y);
	void HandleMovement(void);
	void MoveLeft(void);
	void MoveRight(void);
	void MoveUp(void);
	void MoveDown(void);
	void Update(void);
private:
	sf::Sprite m_sprite;
	sf::Texture m_texture;
	State<Player>* currentState;				// Not sure if needed, but will keep it in just in case
	unsigned int m_health;
	int m_screenWidth;
	int m_screenHeight;
};

