#ifndef SERIEIMPAR_H
#define SERIEIMPAR_H
#include "serie.h"

class SerieImpar: public Serie //clase hija de Serie, no declaramos el atributo int nros[4]; ni el metodo int *getNros(); ya que se heredan de la clase padre Serie.
{
public:
    SerieImpar();
    void generar();//usamos el metodo que se hereda para generar los numeros de la secuencia
};

#endif // SERIEIMPAR_H
