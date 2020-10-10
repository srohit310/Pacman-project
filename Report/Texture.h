#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Network.hpp>
#include <vector>
#include<iostream>
class Texture
{
	sf::Texture pacman;
	sf::Texture labyrinth;
	sf::Sprite spritepacman;
	sf::Sprite Red;
	sf::Sprite Pink;
	sf::Sprite Lightblue;
	sf::Sprite Orange;
	std::vector<sf::Sprite> spritelabyrinth;
	sf::IntRect intrect;
public:
	Texture();
	void Load();
	sf::Sprite getspriteatpos(int i);
	int getIndex();

};

