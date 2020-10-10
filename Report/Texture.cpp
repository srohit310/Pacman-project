#include "Texture.h"

Texture::Texture()
{
	this->intrect = sf::IntRect(135, 0, 15, 15);
}

void Texture::Load()
{
	if (!pacman.loadFromFile("things.png")) {
		std::cout << "Failed to load file";
	}
	if (!labyrinth.loadFromFile("lab.png")) {
		std::cout << "Failed to load file";
	}
	spritepacman.setTexture(pacman);
	spritepacman.setScale(2.0f, 2.0f);
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 4; j++) {
			sf::Sprite tempsprite;
			tempsprite.setTexture(labyrinth);
			tempsprite.setTextureRect(sf::IntRect(i * 8, j * 8, 8, 8));
			tempsprite.setScale(2.0f, 2.0f);
			spritelabyrinth.push_back(tempsprite);
		}
	}
	spritepacman.setTextureRect(intrect);
}

sf::Sprite Texture::getspriteatpos(int i)
{
	return spritelabyrinth[i];
}

int Texture::getIndex()
{
	return spritelabyrinth.size();
}
