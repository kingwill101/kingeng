#include "game.hpp"

#define HEIGHT 600
#define WIDTH 800

Game::Game()
{
}

Game::~Game(){

  cleanup();
}



void Game::cleanup(){
    Manager::getInstance()->cleanup();
}

void Game::init(){
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

    render();
}



void Game::gameloop(){
    bool done = false;
    SDL_Event event;
    while(!done){

        while(SDL_PollEvent(&event)){

            if(event.type == SDL_QUIT){
               SDL_Quit();
               done = true;
            }

        }//event loop


    SDL_SetRenderDrawColor(renderer, 23, 225, 225,1);
    SDL_RenderClear(renderer);

    this->update();

    SDL_RenderPresent(renderer);
    }//game loop
}


void Game::level(std::string fn){
    auto y = 0;
    std::string line;
    std::ifstream levelFile(fn);
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

            } // forloop
            y+=12;

        }
    } //while
    levelFile.close(); //close loaded level file
}

void Game::render(){

    level("level/level1.txt");
}

void Game::start(){
    init();
    gameloop();
    cleanup();
}

void Game::update(){

    Manager::getInstance()->update();
}
