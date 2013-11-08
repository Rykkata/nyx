#include "Utility.h"

namespace util
{
	bool fexists(const char *filename)
	{
		 ifstream ifile(filename);

		 return (bool)ifile;
	}

	sf::Sprite& ScaleImage(sf::Sprite& scaleSprite)
	{
		sf::Vector2u size = scaleSprite.getTexture()->getSize();
		float widthScale =  (float)screenWidth / (float)size.x;
		float heightScale = (float)screenHeight / (float)size.y ;
		scaleSprite.setScale(widthScale, heightScale);

		return scaleSprite;
	}
}