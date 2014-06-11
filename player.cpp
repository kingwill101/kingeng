#include "player.hpp"

Player::Player(SDL_Renderer *renderer, kFloat x, kFloat y)
{
    this->r = renderer;
    this->setCoordinate(x, y);
    this->p = new Draw(renderer);
    this->drawPlayer();
    pImage = new Image(renderer);
}

void Player::drawPlayer(){
    //SDL_Rect rect = {10,10,50,50};
    //SDL_RenderCopy(this->r,pImage->loadTexture("data/player.bmp"),NULL,&rect);

    this->p->drawSquare(this->getx(), this->gety(), 200, 100 , red);

}

void Player::update(){
    this->setX(this->getx());
    this->drawPlayer();
}

