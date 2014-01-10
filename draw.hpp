#ifndef DRAW_HPP
#define DRAW_HPP

#include "types.hpp"


class Draw {

public:
    Draw();
    Draw(SDL_Renderer *);
    kCircle circle(kvec2f, kvec2f, kvec2f);
    kSquare square(int, int, int h, int w);
    kTriangle triangle(kvec2f, kvec2f, kvec2f);
    kLine line(kvec2f, kvec2f);
    void drawTriangle(kvec2f, kvec2f, kvec2f, kColor);
    void drawLine(kvec2f, kvec2f, kColor);
    void drawLine(kFloat,kFloat,kFloat, kFloat,kColor);
    void drawSquare(int, int, int h, int w, kColor col);

private:
    SDL_Renderer *renderer;
};//class
#endif // DRAW_HPP
