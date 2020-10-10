#include "Game.h"

//priv functions

void Game::initvariable()
{
	this->window = nullptr;
    color = sf::Color(250, 0, 0, 0);
    this->resetvalue = 135;
}

void Game::initwindow()
{
	this->videomode.height = 600;
	this->videomode.width = 700;
	this->window = new sf::RenderWindow(this->videomode, "Pacman", sf::Style::Titlebar);
    texture.Load();
}

//constructors and destructors

Game::Game()
{
	this->initvariable();
	this->initwindow();
}

Game::~Game()
{
	delete this->window;
}


//accessors

const bool Game::getIsWindowOpen()
{
	return this->window->isOpen();
}

//functions

void Game::pollevents()
{
    static int d = 250;
    
    
    while (this->window->pollEvent(event)) {


        switch (event.type) {

        case sf::Event::Closed:
            this->window->close();
            break;
        case sf::Event::KeyPressed:
            if (event.key.code == sf::Keyboard::E)
                this->window->close();
            if (event.key.code == sf::Keyboard::Escape)
                this->window->close();
            /// <summary>
            /// 
            /// </summary>
            /*int temp;
            temp = res.getIntRect().left - resetvalue;
            if (event.key.code == sf::Keyboard::Up) 
                resetvalue = 0;                                 
            if (event.key.code == sf::Keyboard::Down) 
                resetvalue = 45;
            if (event.key.code == sf::Keyboard::Left) 
                resetvalue = 90;
            if (event.key.code == sf::Keyboard::Right) 
                resetvalue = 135;*/
                
            // = resetvalue + temp;

            /// <summary>
            /// 
            /// </summary>
            break;

        }
    }
}

void Game::Update()
{
    
    this->pollevents();
    
}

void Game::Render()
{

    /*if (clock.getElapsedTime().asSeconds() >= 0.15f) {
        if (intrect.left == resetvalue + 30) {
            intrect.left = resetvalue;
        }
        else {
            intrect.left += 15;
        }
        clock.restart();
    }*/

    this->window->clear();
    for (int i = 0; i < 29; i++) {
        for (int j = 0; j < 36; j++) {
            sf::Sprite tempsprite;
            tempsprite = texture.getspriteatpos(map.getlayouttexture(i,j));
            tempsprite.setPosition(sf::Vector2f(i*16.0f,j*16.0f));
            this->window->draw(tempsprite);
        }
    }
    this->window->display();
}
