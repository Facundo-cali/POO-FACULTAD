#include "contacto.h"

contacto::contacto()
{

}

contacto::contacto(char *tipo, char *valor)
{
    this->tipo=tipo;
    this->valor=valor;
}

char * contacto::getTipo()
{
    return tipo;
}

void contacto::setTipo(char *newTipo)
{
    tipo = newTipo;
}

char *contacto::getValor()
{
    return valor;
}

void contacto::setValor(char *newValor)
{
    valor = newValor;
}

