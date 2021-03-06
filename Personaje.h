#ifndef PERSONAJE_H
#define PERSONAJE_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

class Personaje
{
    public:
        int x,y,vida;
        SDL_Surface*imagen;
        Personaje(int x,int y,SDL_Surface*personaje);
        void dibujar(SDL_Surface *screen);
        void recibirAtaque();
        void setX(int x);
        void setY(int y);
        virtual ~Personaje();
    protected:
    private:
};

#endif // PERSONAJE_H
