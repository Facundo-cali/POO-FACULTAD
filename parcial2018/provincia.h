#ifndef PROVINCIA_H
#define PROVINCIA_H


#include "dep.h"
class provincia
{
private:
    char * nombre;
    dep *departamentos[50];
    int cantDep;
public:
    provincia(char * nombre);
    char *getNombre();
    void setNombre(char *newNombre);
    int getPoblacion();
    void addDep(dep *dep);
};

#endif // PROVINCIA_H
