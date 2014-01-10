#ifndef OBJECT_HPP
#define OBJECT_HPP
#include "types.hpp"

class Object
{
public:

    Object();
    void setX(kInt);
    void setY(kInt);
    void setWidth(kInt);
    void setwh(kInt, kInt);//w,h
    void setGeometry(kInt, kInt, kInt, kInt);//x,y,w,h
    void setHeight(kInt);
    void setCoordinate(kInt, kInt);//x,y
    void setCoordinate(kvec2f);//{x,y}

private:

    kRect objRect;
    kInt getx();
    kInt gety();
    kInt getWidth();
    kInt getHeight();
    kvec2 getCoordinate();


};

#endif // OBJECT_HPP
