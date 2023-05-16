#include "gasto.h"


gasto::gasto(int monto, char *desc, char tipo)
{
    this->monto = monto;
    this->desc = desc;
    this->tipo = tipo;
}

int gasto::getMonto()
{
    return this->monto;
}

char *gasto::getDesc()
{
    return this->desc;
}

char gasto::getTipo()
{
    return this->tipo;
}

