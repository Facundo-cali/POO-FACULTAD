#ifndef LISTA_H
#define LISTA_H
#include "cumpleanio.h"


class lista
{
private:
    cumpleanio * cumpleanios;//creo el array con cunmpleanios, que se crean en la funcion cargar.No es necesario cargalos en el main,los cargo en un metodo de esta clase
    int cant;
    int indice = 0;
public:
    lista(int cantCumples);
    void cargar(char *n,int d,int m);
    void mostrar();
};

#endif // LISTA_H
