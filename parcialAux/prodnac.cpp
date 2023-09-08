#include "prodnac.h"

prodNac::prodNac()
{

}

prodNac::prodNac(char * nom, int precio) : prod(nom,precio)
{

}

float prodNac::getPrecio()
{
    return (this->precio + ((this->precio)* 0.1));
}


