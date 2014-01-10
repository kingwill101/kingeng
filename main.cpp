#include <iostream>
#include <draw.hpp>
#include <image.hpp>
#include <object.hpp>
using namespace std;

#define HEIGHT 640
#define WIDTH 400

void mainLoop();
SDL_Window *win;
SDL_Renderer *renderer;
SDL_Event event;

//colors

kColor kBlack = {0,0,0,0};
kColor kRed = {225,0,0,0};
kColor kGreen = {0, 225, 0, 0};
kColor kBlue = {0, 0, 225, 0};


int main()
{
    SDL_Init(SDL_INIT_VIDEO);
    win = SDL_CreateWindow("kingeng test", 0, 0, HEIGHT, WIDTH, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    mainLoop();
    return 0;
}

void mainLoop(){
    Object *ball = new Object();
    ball->setCoordinate(100,100);
    ball->setGeometry(100,100,12,123);
    Draw *d = new Draw(renderer);
    kvec2f linevec = {100, 100};
    kvec2f linevec2 = {300, 300};

    Image image1(renderer, win);
    SDL_Texture *t =image1.loadTexture("data/image.bmp");

    while(true){

        while(SDL_PollEvent(&event)){

            if(event.type == SDL_QUIT){
               SDL_Quit();
            }
        }//event loop


    SDL_SetRenderDrawColor(renderer, 23, 225, 225,1);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 23, 12, 50,.5);

   SDL_RenderCopy(renderer, t, NULL, NULL);
   d->drawLine(linevec, linevec2, kGreen);
   d->drawLine(10, 300, 50, 400, kRed);
   d->drawSquare(200,200,200,200,kBlack);

    SDL_RenderPresent(renderer);
    }//game loop


}
