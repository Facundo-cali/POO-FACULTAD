#include "user.h"


user::user(char *nombre)
{
    this->nombre = nombre;
}

char *user::getNombre()
{
    return this->nombre;
}
