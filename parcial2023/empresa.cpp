#include "empresa.h"

char *empresa::getNombre() const
{
    return nombre;
}

void empresa::setNombre(char *newNombre)
{
    nombre = newNombre;
}

empresa::empresa()
{

}

empresa::empresa(char *nombre)
{
    this->nombre = nombre;
}

void empresa::addViaje(viaje * viajeNuevo)
{
    this->viajesTotales[cantViajes] = viajeNuevo;
    this->cantViajes++;
}

int empresa::getValor()
{
    int valor = 0;
    for (int i = 0; i < cantViajes; ++i) {
        valor += (*viajesTotales[i]).getValor();
    }
    return valor;
}


