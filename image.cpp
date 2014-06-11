#include "image.hpp"

Image::Image()
{

}
Image::Image(SDL_Renderer *ren, SDL_Window *w){
    this->render = ren;
    this->win = w;
}
Image::Image(SDL_Renderer *ren){
    this->render = ren;
}

Image::Image(SDL_Window *w){
    this->win = w;
}

SDL_Surface *Image::loadImage(std::string file) {

    image = NULL;
    image =  SDL_LoadBMP(file.c_str());
    return this->image;
}

SDL_Texture *Image::loadTexture(std::string file, SDL_Renderer *r){
    image = SDL_LoadBMP(file.c_str());
    tex = SDL_CreateTextureFromSurface(r, image);

    return tex;
}


SDL_Texture *Image::loadTexture(std::string file){
    image = SDL_LoadBMP(file.c_str());
    tex = SDL_CreateTextureFromSurface(this->render, image);

    return tex;
}
