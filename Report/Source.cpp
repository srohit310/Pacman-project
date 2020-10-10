#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Network.hpp>
#include "Game.h"
#include<iostream>

int main()
{
    Game game;

    while (game.getIsWindowOpen()) {
        //Update
        game.Update();
        //Render
        game.Render();
    }

    //Game ends
    return 0;
}