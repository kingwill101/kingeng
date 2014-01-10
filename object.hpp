#ifndef OBJECT_HPP
#define OBJECT_HPP
#include "types.hpp"

class Object
{
public:
    Object();
    kInt getx();
    kInt gety();
    kInt getWidth();
    kInt getHeight();
    kvec2 getCoordinate();
    kRect objRect;

private:
    void setX(kInt);
    void setY(kInt);
    void setWidth(kInt);
    void setHeight(kInt);
    void setCoordinate(kInt, kInt);
    void setCoordinate(kvec2f);


};

#endif // OBJECT_HPP
