#include "vc.h"

char *vc::getDestino() const
{
    return destino;
}

void vc::setDestino(char *newDestino)
{
    destino = newDestino;
}

int vc::getValor()
{
    return this->valor;
}

vc::vc()
{

}

vc::vc(char *nombre, char * destino, int valor) : viaje(nombre)
{
    this->destino = destino;
    this->valor = valor;
}


std::ostream& operator<<(std::ostream& cout, vc& obj){
    cout << obj.getNombre() << " " << obj.getValor() <<std::endl;
    return cout;
}
