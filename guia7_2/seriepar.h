#ifndef SERIEPAR_H
#define SERIEPAR_H
#include "serie.h"

class SeriePar : public Serie { //clase hija de Serie, no declaramos el atributo int nros[4]; ni el metodo int *getNros(); ya que se heredan de la clase
public:
    SeriePar();
    void generar();//usamos el metodo que se hereda para generar los numeros de la secuencia
};

#endif // SERIEPAR_H
