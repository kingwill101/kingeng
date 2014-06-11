#include "object.hpp"

Object::Object()
{
}

Object::~Object(){

}

kInt Object::getHeight(){
    return objRect.h;
}

kInt Object::getWidth(){
    return objRect.w;
}
kInt Object::getx(){
    return objRect.x;
}
kInt Object::gety(){
    return objRect.y;
}

kvec2f Object::getCoordinate(){

    kvec2f xyRect= {objRect.x, objRect.y};
    return xyRect;
}

void Object::setHeight(kInt height){
    objRect.h = height;
}

void Object::setWidth(kInt width){
    objRect.w = width;
}
void Object::setX(kInt x){
    objRect.x = x;
}
void Object::setY(kInt y){
    objRect.y = y;
}

void Object::setCoordinate(kInt x, kInt y){

    objRect.x = x;
    objRect.y = y;
}

void Object::setCoordinate(kvec2f cord){

    objRect.x = cord.x;
    objRect.y = cord.y;
}
void Object::setGeometry(kInt x, kInt y, kInt w, kInt h){
    objRect.x = x;
    objRect.y = y;
    objRect.w = w;
    objRect.h = h;
}

SDL_Texture * Object::loadImage(std::string fn){
    SDL_Surface *temp = NULL;
    SDL_Texture *optimized = NULL;

    temp = SDL_LoadBMP(fn.c_str());
   optimized = SDL_CreateTextureFromSurface(this->renderer,temp);
   SDL_FreeSurface(temp);
   return optimized;

}
