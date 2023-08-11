#ifndef DEP_H
#define DEP_H


#include "ciudad.h"
class dep
{
private:
    char * nombre;
    ciudad ** ciudades;//debe ser doble ** para vector dinamico
//    ciudad *ciudades[30]; //vector estatico
    int cantCiudades = 0;
public:
    dep(char * nombre);

    char *getNombre();
    void setNombre(char *newNombre);
    int getPoblacion();
    void addCiudad(ciudad *ciudad);
    void deleteCiudad(ciudad *ciudad1);
};

#endif // DEP_H
