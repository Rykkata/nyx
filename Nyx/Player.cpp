#include "Player.h"


Player::Player(int id) : Entity(id)
{
	m_health = MAX_HEALTH;
}

Player::Player(int id, float x, float y, char * image, int screenWidth, int screenHeight) : Entity(id)
{
	m_pos.x = x;
	m_pos.y = y;
	
	m_texture.loadFromFile(image);

	m_width = m_texture.getSize().x;
	m_height = m_texture.getSize().y;

	m_sprite = sf::Sprite(m_texture);
	m_sprite.setPosition(m_pos);
	m_health = MAX_HEALTH;

	m_screenWidth = screenWidth;
	m_screenHeight = screenHeight;
}

Player::~Player(void)
{
	delete currentState;
}

void Player::HandleMovement(void)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || xb360::LeftThumbRight() || xb360::DPadRight())
		MoveRight();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || xb360::LeftThumbLeft()  || xb360::DPadLeft())
		MoveLeft();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || xb360::LeftThumbUp()    || xb360::DPadUp())
		MoveUp();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) || xb360::LeftThumbDown()  || xb360::DPadDown())
		MoveDown();
}

void Player::LoadSprite (char * image)
{
	m_texture.loadFromFile(image);

	m_width = m_texture.getSize().x;
	m_height = m_texture.getSize().y;

	m_sprite.setTexture(m_texture);
}

void Player::SetX(float x)
{
	m_pos.x = x;
}


void Player::SetY(float y)
{
	m_pos.y = y;
}

void Player::MoveLeft(void)
{
	if(m_pos.x - MOVEMENT >= 0)
		m_pos.x -= MOVEMENT;

	m_sprite.setPosition(m_pos);
}

void Player::MoveRight(void)
{
	if(m_pos.x + MOVEMENT + m_width <= m_screenWidth)
		m_pos.x += MOVEMENT;

	m_sprite.setPosition(m_pos);
}

void Player::MoveUp(void)
{
	if(m_pos.y - MOVEMENT >= 0)
		m_pos.y -= MOVEMENT;

	m_sprite.setPosition(m_pos);
}

void Player::MoveDown(void)
{
	if(m_pos.y + MOVEMENT + m_height <= m_screenHeight)
		m_pos.y += MOVEMENT;

	m_sprite.setPosition(m_pos);
}

sf::Sprite& Player::GetSprite(void)
{
	return m_sprite;
}


void Player::Update(void)
{
	HandleMovement();
}

bool Player::CollideWith(Entity& otherEntity)
{
	return false;
}