#ifndef GESTOR_H
#define GESTOR_H
#include "relacion.h"


// su funcion es guardar todas las relaciones,le pasamos las relaciones y las puede mostrar
class gestor
{
    relacion ** relaciones;
    int contRelaciones = 0;
public:
    gestor();
    void addRelacion(relacion * relacion1);
    void mostrarRelaciones();//muestra las relaciones de todos los usuarios
};

#endif // GESTOR_H
