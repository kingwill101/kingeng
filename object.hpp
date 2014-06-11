#ifndef OBJECT_HPP
#define OBJECT_HPP
#include "types.hpp"
#include <SDL.h>
#include <iostream>

class Object
{
public:

    Object();
    virtual ~ Object();
    void setX(kInt);
    void setY(kInt);
    void setWidth(kInt);
    void setwh(kInt, kInt);//w,h
    void setGeometry(kInt, kInt, kInt, kInt);//x,y,w,h
    void setHeight(kInt);
    void setCoordinate(kInt, kInt);//x,y
    void setCoordinate(kvec2f);//{x,y}
    virtual void update() = 0;



    kRect objRect;
    kInt getx(); //returns objRect.x
    kInt gety();
    kInt getWidth();//returns objRect.w
    kInt getHeight();
    kvec2f getCoordinate(); // returns {x, y}
    SDL_Texture *loadImage(std::string fn);
    SDL_Renderer *renderer;


};

#endif // OBJECT_HPP
