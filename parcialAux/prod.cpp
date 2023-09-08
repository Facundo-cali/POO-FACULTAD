#include "prod.h"

char *prod::getNom() const
{
    return nom;
}

prod::prod()
{

}

prod::prod(char *nom, int precio)
{
    this->nom=nom;
    this->precio = precio;
}

int prod::getPrecioActual()
{
    return this->precio;
}
