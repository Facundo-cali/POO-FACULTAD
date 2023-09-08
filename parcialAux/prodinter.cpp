#include "prodinter.h"

prodInter::prodInter()
{

}

prodInter::prodInter(char *nom, int precio, int aumento) : prod(nom,precio)
{
    this->aumento = aumento;
}

float prodInter::getPrecio()
{
    int precioFinal = this->precio + ((this->precio) * (this->aumento/100));
    return precioFinal;
}

