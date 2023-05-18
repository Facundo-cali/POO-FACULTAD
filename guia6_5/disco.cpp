#include "disco.h"
#include <iostream>

using namespace std;

Disco::Disco(char * nombre)
{
    this->nombre = nombre;
    this->canciones = new Cancion*[this->cantCanciones];
}

void Disco::addCanciones(char * nombreCancion, Autor * autor)
{
    Cancion ** aux = new Cancion*[this->cantCanciones+1];

    for (int i = 0; i < cantCanciones; ++i) {
        aux[i] = this->canciones[i];
    }

    aux[this->cantCanciones] = new Cancion(nombreCancion, autor);

    this->canciones = aux;

    cantCanciones++;
}
void Disco::mostrarCanciones()
{
    cout<<"Canciones del disco: "<<this->nombre<<endl;
    for (int i = 0; i < this->cantCanciones; ++i) {
        cout<<i+1<<": "<<this->canciones[i]->getNombre()<<".Autor: "<<this->canciones[i]->getAutor()<<endl;
    }
}

