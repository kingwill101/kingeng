#include <iostream>
#include <draw.hpp>
#include <image.hpp>
#include <object.hpp>
#include <audio.h>

using namespace std;

#define HEIGHT 640
#define WIDTH 400

void mainLoop();
SDL_Window *win;
SDL_Renderer *renderer;

Audio *player;

int main()
{
    player = new Audio();
    player->loadTrack("data/a.mp3");


    win = NULL;
    renderer = NULL;
    if (!SDL_Init(SDL_INIT_VIDEO)){
        SDL_Quit();
        //do something
    }

    win = SDL_CreateWindow("kingeng test", 0, 0, HEIGHT, WIDTH, SDL_WINDOW_SHOWN);

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
    while(!done){
    SDL_Event event;
        while(SDL_PollEvent(&event)){

            if(event.type == SDL_QUIT){
               done = true;
               SDL_Quit();
            }else if(event.type == SDL_KEYDOWN){
                switch(event.key.keysym.sym){
                    case SDLK_SPACE:
                        player->play();
                        break;
                     case SDLK_s:
                        player->stop();
                        break;
                     case SDLK_p:
                        player->pause();
                        break;
                }

            }

        }//event loop


    SDL_SetRenderDrawColor(renderer, 23, 225, 225,1);
    SDL_RenderClear(renderer);


    SDL_RenderPresent(renderer);
    }//game loop


}
