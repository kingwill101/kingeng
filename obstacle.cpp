#include "obstacle.h"

Obstacle::Obstacle()
{
}
Obstacle::Obstacle(SDL_Renderer *r,kColor col, kFloat x,kFloat y,kFloat w,kFloat h)
{
    this->setGeometry(x,y,w,h);
    this->paint = new Draw(r);
    this->col = col;
}

Obstacle::Obstacle(SDL_Renderer *r,std::string fn, kFloat x,kFloat y,kFloat w,kFloat h)
{
    this->setGeometry(x,y,w,h);
    tex = NULL;
    this->renderer = r;
    tex = this->loadImage(fn);
}

void Obstacle::update(){

    SDL_Rect dst = {this->getx(), this->gety(), this->getWidth(), this->getHeight()};
    SDL_RenderCopy(renderer,this->tex,NULL,&dst);
}
