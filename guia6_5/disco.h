#ifndef DISCO_H
#define DISCO_H
#include "cancion.h"


class Disco
{
private:
    char * nombre;
    Cancion ** canciones;
    int cantCanciones = 0;
public:
    Disco(char * nombre);
    void addCanciones(char * nombreCancion, Autor * autor);
    void mostrarCanciones();
};

#endif // DISCO_H
