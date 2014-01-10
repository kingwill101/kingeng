#include "draw.hpp"
#include <SDL2/SDL.h>
#include <math.h>

/*

TODO refactor code seperating implementation of the drawing of shapes and returning of types

*/

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



kSquare Draw::square(int x, int y, int h, int w){

    kSquare square = {{x,y} ,w, h};
    return square;
}



kLine Draw::line(kvec2f v1, kvec2f v2){

    kLine line = {v1 , v2};
    return line;
}

void Draw::drawTriangle(kvec2f v1, kvec2f v2, kvec2f v3, kColor col){
    kTriangle tri = {v1,v2,v3};
}

void Draw::drawSquare(int x, int y, int h, int w, kColor col){

    SDL_Rect s = {x , y, w, h};
    SDL_SetRenderDrawColor(this->renderer, col.r, col.g, col.b, col.a);
    SDL_RenderDrawRect(this->renderer,&s);
    SDL_RenderFillRect(this->renderer,&s );
}


void Draw::drawLine(kvec2f v1, kvec2f v2, kColor col){

    //set drawing color
    SDL_SetRenderDrawColor(this->renderer, col.r, col.g, col.b, col.a);
    //set data for drawing line
    SDL_RenderDrawLine(this->renderer, v1.x, v1.y, v2.x, v2.y);

}

void Draw::drawLine(kFloat x1, kFloat y1, kFloat x2, kFloat y2, kColor col){
     //set drawing color
    SDL_SetRenderDrawColor(this->renderer, col.r, col.g, col.b, col.a);
    //set data for drawing line
    SDL_RenderDrawLine(this->renderer, x1, y1, x2, y2);

}


kCircle Draw::circle(kvec2f pos, kvec2f r, kvec2f angle ){
//TODO to be implemented
    kCircle circle = {pos, r, angle};
    return circle;
}


