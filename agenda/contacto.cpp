#include "contacto.h"

Contacto::Contacto(char* nombre, char* telefono, char* email)
{
    this->nombre = nombre;
    this->telefono = telefono;
    this->email = email;
}

char *Contacto::getNombre()
{
    return this->nombre;
}

char *Contacto::getTel()
{
    return this->telefono;
}

char *Contacto::getEmail()
{
    return this->email;
}

