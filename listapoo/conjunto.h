#ifndef CONJUNTO_H
#define CONJUNTO_H
#include "lista.h"

class Conjunto: public Lista //conjunto seria una clase hija de lista y puede aprovechar los métodos y variables de la clase base.
{
public:
    Conjunto(int dato);
    virtual bool add(int dato);
};

#endif // CONJUNTO_H
