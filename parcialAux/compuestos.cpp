#include "compuestos.h"

compuestos::compuestos()
{

}

compuestos::compuestos(char *nom, int precio) : prod(nom,precio)
{

}



void compuestos::addProd(prod * newProd)
{
    this->productos[this->cantProd] = newProd;
    this->cantProd++;
}

float compuestos::getPrecio()
{
    float precio = 0;
    for (int i = 0; i < this->cantProd; ++i) {
        precio += this->productos[i]->getPrecio();
    }
    return precio;
}
