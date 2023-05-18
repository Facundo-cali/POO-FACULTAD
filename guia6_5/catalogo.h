#ifndef CATALOGO_H
#define CATALOGO_H
#include "disco.h"


class Catalogo
{
private:
    Disco ** discos;
    int cantDiscos = 0;
public:
    Catalogo();
    void addDisco(Disco * nuevoDisco);
    void mostrarCanciones();
};

#endif // CATALOGO_H
