#include "provincia.h"

provincia::provincia(char * nombre)
{
    this->cantDep=0;
    this->nombre = nombre;
}

char *provincia::getNombre()
{
    return this->nombre;
}

void provincia::setNombre(char *newNombre)
{
    this->nombre = newNombre;
}

int provincia::getPoblacion()
{
    int habitantes = 0;
    for (int i = 0; i < this->cantDep; ++i) {
        habitantes += departamentos[i]->getPoblacion();
    }
    return habitantes;
}

void provincia::addDep(dep *dep)
{
    departamentos[this->cantDep] = dep;
    this->cantDep++;
}


