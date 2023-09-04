#include "vmix.h"

vmix::vmix()
{

}

vmix::vmix(char *nombre, vc *viajeComun): viaje(nombre)
{
    this->viajeComun = viajeComun;
}

int vmix::getValor()
{
    int valor = 0;
    for (int i = 0; i < this->cantViajes; ++i) {
        valor += this->viajesDestino[i]->getValor();
    }
    return valor;
}

void vmix::addViajesDestino(vd * viaje)
{
    vd ** aux = new vd*[this->cantViajes + 1];

    for (int i = 0; i < this->cantViajes; ++i) {
        aux[i] = this->viajesDestino[i];
    }

    aux[this->cantViajes] = viaje;

    delete[] this->viajesDestino;

    this->viajesDestino = aux;

    this->cantViajes++;
}

std::ostream& operator<<(std::ostream& cout, vmix& obj){
    cout << obj.getNombre() << " " << obj.getValor() <<std::endl;
    return cout;
}


