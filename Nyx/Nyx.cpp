#include "Nyx.h"
#include "Constant.h"
#include <iostream>

unsigned int screenWidth;
unsigned int screenHeight;

using namespace std;

Nyx& Nyx::GetInstance(void)
{
	static Nyx instance;
	
	return instance;
}

Nyx::~Nyx()
{
	delete player;
	delete curWorld;
}

void Nyx::RunGame(void)
{
	sf::RenderWindow window;		// Main display window
	frames = 0;
	// Make sure the INI file is created
	if(!util::fexists(INI_PATH))
		createINIFile();
	else
		iniFile = new CIniFile(INI_PATH); 

	// Load all necessary information to start, mostly the INI file
	init();
	

	// Create the window, in fullscreen or now
	if(isFullScreen)
		window.create(currentMode, "Nyx", sf::Style::Fullscreen);
	else
		window.create(currentMode, "Nyx");

	// Set VSync
	if(iniFile->GetValueB("Graphics", "VSync"))
		window.setVerticalSyncEnabled(true);
	else
		window.setVerticalSyncEnabled(false);

	// Game Loop, while the window is open
    while (window.isOpen())
    {
		// Poll for events
        sf::Event event;
		sf::Time elapsed = gameClock.restart();

		// Handle events
        while (window.pollEvent(event))
        {
			// Close the Window
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();

			// Do we need this? Handle screen resizes
			if (event.type == sf::Event::Resized)
			{
				
			}
        }

		// Update the game
		updateGame(elapsed);

		// Wipe current graphics on screen, and re-render entities, then display the window
        window.clear();
		ticks++;
		window.draw(curWorld->GetImage());
		renderEntities(&window);
        window.display();
    }
}

void Nyx::createINIFile(void)
{
	// Create the path
	iniFile = new CIniFile(INI_PATH); 

	// Set the Graphics Properties
	iniFile->SetValueB("Graphics", "Fullscreen", false);
	iniFile->SetValueI("Graphics", "ScreenWidth", 800);
	iniFile->SetValueI("Graphics", "ScreenHeight", 600);
	iniFile->SetValueB("Graphics", "VSync", true);

	// IMPORTANT Make sure we actually write the current information
	iniFile->WriteFile();
}

void Nyx::init()
{
	// Load valid resolutions from graphcis card
	fullScreens = sf::VideoMode::getFullscreenModes();

	// Initialize the SteamAPI (WILL NOT WORK FOR NOW)
	/**if(!SteamAPI_Init())
	{
		cout << "SteapAPI failed to initialize" << endl;
	}*/

	// Read in the information
	iniFile->ReadFile();

	curWorld = new World(BACKGROUND_PATH);
	
	tick = tick.Zero;

	// Read in the window information
	screenWidth = iniFile->GetValueI("Graphics", "ScreenWidth");
	screenHeight = iniFile->GetValueI("Graphics", "ScreenHeight");
	isFullScreen = iniFile->GetValueB("Graphics", "Fullscreen");

	// Create the main player
	player = new Player(0, PLAYER_STARTX, PLAYER_STARTY, PLAYER_PATH, screenHeight, screenWidth);
	EntityMgr.AddEntity(player);


	util::ScaleImage(curWorld->GetImage(), screenWidth, screenHeight);
	// Define the window graphics
	currentMode = sf::VideoMode(screenWidth, screenHeight);
}

void Nyx::renderEntities(sf::RenderWindow * window)
{
	vector<Entity*>::iterator it = EntityMgr.GetEntities().begin();
	for(; it != EntityMgr.GetEntities().end(); ++it)
	{
		window->draw(((*it)->GetSprite()));
	}
}

void Nyx::updateEntities(void)
{
	vector<Entity*>::iterator it = EntityMgr.GetEntities().begin();
	for(; it != EntityMgr.GetEntities().end(); ++it)
	{
		(*it)->Update();
	}
}

void Nyx::updateGame(sf::Time elapsed)
{
	tick += elapsed;
	
	if(tick.asMicroseconds() >= TICK_RATE)		// Handle for 60 FPS
	{
		tick -= sf::microseconds(TICK_RATE);
		updateEntities();
		++frames;

		if ( tick.asMicroseconds() / TICK_RATE > 2) // Something happened, reset it 
			tick = tick.Zero;
	}
	
	//TODO: Remove this from debuigging
	seconds += elapsed;
	if(seconds.asSeconds() >= 1)
	{
		cout << "Seconds: " << seconds.asSeconds() << " Ticks: " << frames << " Frames: " << ticks << endl << endl; // Comment
		ticks = 0;
		frames = 0;
		seconds = seconds.Zero;
	}
}