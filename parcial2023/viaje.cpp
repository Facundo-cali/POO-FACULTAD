#include "viaje.h"

char *viaje::getNombre() const
{
    return nombre;
}

void viaje::setNombre(char *newNombre)
{
    nombre = newNombre;
}

viaje::viaje()
{

}

viaje::viaje(char *nombre)
{
    this->nombre = nombre;
}
