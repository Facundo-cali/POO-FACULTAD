#ifndef VECTOR_H
#define VECTOR_H
#include "billetes.h"

class vector
{
private:
    int monto = 0;
public:
    vector();
    vector(int monto);
    int cantidadDeBilletes(billetes *billetesDisponibles);
    int * cambio(billetes *billetesDisponibles);
};

#endif // VECTOR_H
