#include "draw.hpp"
#include <SDL2/SDL.h>
#include <math.h>

Draw::Draw()
{
}
Draw::Draw(SDL_Renderer *r){

    this->renderer = r;
}

kTriangle Draw::triangle(kvec2f v1, kvec2f v2, kvec2f v3){

    kTriangle tri = {v1 , v2, v3};
    return tri;
}

kSquare Draw::square(int x, int y, int h, int w, kColor col){


    kSquare square = {{x,y} ,w, h};

    SDL_Rect s = {x , y, w, h};
    SDL_SetRenderDrawColor(this->renderer, col.r, col.g, col.b, col.a);
    SDL_RenderDrawRect(this->renderer,&s);
    SDL_RenderFillRect(this->renderer,&s );

    return square;
}

kLine Draw::line(kvec2f v1, kvec2f v2, kColor col){

    kLine line = {v1 , v2};
    SDL_SetRenderDrawColor(this->renderer, col.r, col.g, col.b, col.a);
    SDL_RenderDrawLine(this->renderer, v1.x, v1.y, v2.x, v2.y);
    return line;
}

void Draw::line(kFloat x1, kFloat y1, kFloat x2, kFloat y2, kColor col){
    SDL_SetRenderDrawColor(this->renderer, col.r, col.g, col.b, col.a);
    SDL_RenderDrawLine(this->renderer, x1, y1, x2, y2);

}


kCircle Draw::circle(kvec2f pos, kvec2f r, kvec2f angle ){

    kCircle circle = {pos, r, angle};
    return circle;
}


