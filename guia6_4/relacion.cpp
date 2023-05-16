#include "relacion.h"
#include <cstddef>

relacion::relacion() {
    this->tipo = NULL;
    this->usuariosRelacionados[0] = NULL;
    this->usuariosRelacionados[1] = NULL;
}

relacion::relacion(char *tipo, user * user1, user * user2)
{
    this->tipo = tipo;
    this->usuariosRelacionados[0] = user1;
    this->usuariosRelacionados[1] = user2;
}

char *relacion::getTipo()
{
    return this->tipo;
}

char *relacion::getUser1()
{
    return this->usuariosRelacionados[0]->getNombre();
}

char *relacion::getUser2()
{
    return this->usuariosRelacionados[1]->getNombre();
}
