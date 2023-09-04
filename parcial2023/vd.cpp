#include "vd.h"

char *vd::getDestino() const
{
    return destino;
}

void vd::setDestino(char *newDestino)
{
    destino = newDestino;
}

vd::vd()
{

}

vd::vd(char *nombre, char *destino, int precioPK, int km) : viaje(nombre)
{
    this->destino = destino;
    this->precioPK = precioPK;
    this->km = km;
}

int vd::getValor()
{
    return km*precioPK;
}

std::ostream& operator<<(std::ostream& cout, vd& obj){
    cout << obj.getNombre() << " " << obj.getValor() <<std::endl;
    return cout;
}
