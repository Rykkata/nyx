#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>

#include <stdio.h>
#include <cstdlib>
#include <array>
#include <iostream>
#include <fstream>

#include "Constant.h"
#include "iniFile.h"
#include "Xbox360.h"

extern std::vector<sf::VideoMode> fullScreens;

extern bool isFullScreen;

extern CIniFile * iniFile;

extern unsigned int screenWidth;
extern unsigned int screenHeight;

extern bool fexists(const char *filename);