#include "block.h"

Block::Block(SDL_Renderer *r,kColor col, kFloat x,kFloat y,kFloat w,kFloat h)
{
    this->setGeometry(x,y,w,h);
    this->paint = new Draw(r);
    this->col = col;
}

void Block::update(){
    this->paint->drawSquare(this->getx(), this->gety(), this->getWidth(), this->getHeight(), col);
}
