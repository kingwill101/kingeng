#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <object.hpp>
#include <draw.hpp>
class Obstacle : public Object
{
public:
    Obstacle();
    Obstacle(SDL_Renderer *r,kColor col, kFloat x,kFloat y,kFloat w,kFloat h);
    Obstacle(SDL_Renderer *r,std::string fn, kFloat x,kFloat y,kFloat w,kFloat h);
    void update();
    kColor col;
private:
    Draw *paint;
    SDL_Texture *tex;
    SDL_Surface *tmp;




};

#endif // OBSTACLE_H
