#ifndef BLOCK_H
#define BLOCK_H

#include <draw.hpp>
#include <object.hpp>

class Block : public Object
{
public:
    Block(SDL_Renderer *r, kColor col, kFloat x, kFloat y, kFloat w, kFloat h);
    void update();
    kColor col;
private:
    Draw *paint;
};

#endif // BLOCK_H
