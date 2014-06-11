#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <object.hpp>
#include <draw.hpp>
#include <image.hpp>


class Player : public Object
{
public:
    Player(SDL_Renderer *, kFloat x, kFloat y);
    void update();
    Draw *p;
private:
    void drawPlayer();
    SDL_Renderer *r;
    Image *pImage;
    SDL_Texture *tex;
    //SDL_
};

#endif // PLAYER_HPP
