#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Network.hpp>
#include <vector>
#include <iostream>
#include "Map.h"
#include "Texture.h"

class Game
{
	sf::RenderWindow* window;
	sf::VideoMode videomode;
	sf::Event event;
	sf::Color color;
	Texture texture;
	Map map;
	
	
	
	sf::Clock clock;
	int resetvalue;
	
	
	void initvariable();
	
	void initwindow();

public:
	
	Game();
	
	const bool getIsWindowOpen();

	void pollevents();
	void Update();
	void Render();

	virtual ~Game();
};
