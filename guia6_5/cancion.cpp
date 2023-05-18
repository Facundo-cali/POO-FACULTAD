#include "cancion.h"
#include "autor.h"

Cancion::Cancion(char * nombre, Autor * autor)
{
    this->nombre = nombre;
    this->autor = autor;
}

char * Cancion::getNombre()
{
    return this->nombre;
}

char *Cancion::getAutor()
{
    return this->autor->getNombre();
}
