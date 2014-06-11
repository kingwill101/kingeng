#ifndef GAME_HPP
#define GAME_HPP


#include <iostream>
#include <draw.hpp>
#include <image.hpp>
#include <object.hpp>
#include <audio.h>
#include <types.hpp>
#include <player.hpp>
#include <fstream>
#include <string>
#include <block.h>
#include <obstacle.h>
#include <manager.hpp>

class Game
{
public:
    Game();
    virtual ~Game();
    void init();
    void gameloop();
    void update();
    void level(std::string);
    void start();

private:
    void cleanup();
    void render();//put all drawing code here
    SDL_Window *win;
    SDL_Renderer *renderer;
};

#endif // GAME_HPP
