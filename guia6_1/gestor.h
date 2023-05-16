#ifndef GESTOR_H
#define GESTOR_H
#include "gasto.h"


class gestor
{
private:
    gasto **gastos;
    int cant = 0;
public:
    gestor();
    void addGasto(int monto, char * desc, char tipo);
    void mostrar();
};

#endif // GESTOR_H
