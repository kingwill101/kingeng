#ifndef IMAGE_H
#define IMAGE_H
#include "types.hpp"
#include <string>
class Image
{
public:
    Image();
    Image(SDL_Window*);
    Image(SDL_Renderer *);
    Image(SDL_Renderer *, SDL_Window *);
    SDL_Surface *loadImage(std::string );
    SDL_Texture *loadTexture(std::string, SDL_Renderer *);//allows to pass a reference to a SDL_Renderer instance outside of class
    SDL_Texture *loadTexture(std::string);//uses render

   private:
    SDL_Surface *image;
    SDL_Surface *tmpImage;
    SDL_Texture *tex;
    SDL_Window *win; //holds reference to a SDL_Window
    SDL_Renderer *render; // references renderer used for drawing
    SDL_Rect rect; // holds rec for image/texture
};

#endif // IMAGE_H
