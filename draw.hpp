#ifndef DRAW_HPP
#define DRAW_HPP

#include "types.hpp"


class Draw {

public:
    Draw();
    Draw(SDL_Renderer *);
    kCircle circle(kvec2f, kvec2f, kvec2f);
    kSquare square(int, int, int h, int w, kColor col);
    kTriangle triangle(kvec2f, kvec2f, kvec2f);
    kLine line(kvec2f, kvec2f, kColor);
    void line(kFloat,kFloat,kFloat, kFloat,kColor);
private:
    SDL_Renderer *renderer;
};//class
#endif // DRAW_HPP
