#ifndef COMMON_H
#define COMMON_H

#include <SDL2/SDL.h>

SDL_Texture *ren_load_image(SDL_Renderer *ren, const char *file);
SDL_Texture *ren_load_image_with_dims(SDL_Renderer *ren, const char *file, int *w, int *h);

#endif//COMMON_H
