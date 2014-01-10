#include "object.hpp"

Object::Object()
{
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

kvec2 Object::getCoordinate(){

    kvec2 xyRect= {objRect.x, objRect.y};
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

void Object::setGeometry(kInt x, kInt y, kInt w, kInt h){
    objRect.x = x;
    objRect.y = y;
    objRect.w = w;
    objRect.h = h;
}
