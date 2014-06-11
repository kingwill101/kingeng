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

using namespace std;

#define HEIGHT 600
#define WIDTH 800

void mainLoop();
void level();
SDL_Texture *loadImage(std::string fn);
SDL_Window *win;
SDL_Renderer *renderer;
Draw * d;

Audio *player;
Player *Character;
Image * img;
Manager *man;

int main()
{

    win = NULL;
    renderer = NULL;
    if (!SDL_Init(SDL_INIT_VIDEO)){
        SDL_Quit();
        //do something
    }

    win = SDL_CreateWindow("kingeng test", 0, 0, WIDTH,HEIGHT, SDL_WINDOW_SHOWN|SDL_WINDOW_RESIZABLE);

    if(win == NULL){

        SDL_Quit();
    }
    renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    if(renderer == NULL){
               SDL_Quit();
    }
    mainLoop();

    return 0;
}

void mainLoop(){
    bool done = false;
    SDL_Event event;
    d = new Draw(renderer);

    Character = new Player(renderer, 100,100);
    Manager::getInstance()->addObject(Character);
    img = new Image();
    level();
    while(!done){

        while(SDL_PollEvent(&event)){

            if(event.type == SDL_QUIT){
               SDL_Quit();
               done = true;
            }

        }//event loop


    SDL_SetRenderDrawColor(renderer, 23, 225, 225,1);
    SDL_RenderClear(renderer);
    Manager::getInstance()->update();
    d->drawSquare(100,100,100,100,lime);
    SDL_Rect rect = {100,300,200,200};
    SDL_RenderCopy(renderer,img->loadTexture("data/player.bmp"),NULL, &rect);
    SDL_RenderPresent(renderer);
    }//game loop


}

void level(){


    auto y = 0;
    std::string line;
    std::ifstream levelFile("level/level1.txt");
    if(levelFile.is_open()){
        while (std::getline(levelFile, line)){
            auto x = 0;
            for (char &c: line){

                if(c == '*'){
                   Manager::getInstance()->addObject(new Block(renderer,lime, x,y,10,10));
                    x+=10;
                }

                else if (c == 'g'){
                    Manager::getInstance()->addObject(new Block(renderer,red, x,y,10,10));
                    x+=10;
                }
                else if (c == 'f'){
                    Manager::getInstance()->addObject(new Obstacle(renderer, "data/player.bmp",x,y,50,50));
                    x+=50;

                }
                else {

                    x+=10;


                }



            }
            y+=12;

        }
    }
    levelFile.close();

}
\

