#ifndef EMPRESA_H
#define EMPRESA_H


#include "viaje.h"
class empresa
{
private:
    int cantViajes = 0;
    char *nombre;
    viaje * viajesTotales[100];
public:
    empresa();
    empresa(char * nombre);
    void addViaje(viaje *viajeNuevo);
    int getValor();
    char *getNombre() const;
    void setNombre(char *newNombre);
};

#endif // EMPRESA_H
