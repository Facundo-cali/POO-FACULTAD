#include "catalogo.h"
#include <iostream>

using namespace std;
Catalogo::Catalogo()
{
    this->discos = new Disco*[this->cantDiscos];
}

void Catalogo::addDisco(Disco *nuevoDisco)
{
    Disco ** aux = new Disco*[this->cantDiscos + 1];

    for (int i = 0; i < cantDiscos; ++i) {
        aux[i] = this->discos[i];
    }

    aux[cantDiscos] = nuevoDisco;

    this->discos = aux;

    cantDiscos++;
}

void Catalogo::mostrarCanciones()
{
    cout<<"Catalogo: "<<endl;
    for (int i = 0; i < this->cantDiscos; ++i) {
        this->discos[i]->mostrarCanciones();
        cout<<endl;
    }
}

