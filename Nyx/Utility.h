#pragma once

#include <SFML\Graphics.hpp>

namespace util
{
	bool fexists(const char *filename);
	sf::Sprite& ScaleImage(sf::Sprite& image, int screenWidth, int screenHeight);
}