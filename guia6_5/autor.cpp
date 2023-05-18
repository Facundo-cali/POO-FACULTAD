#include "autor.h"
#include "cancion.h"
#include <iostream>

using namespace std;

Autor::Autor(char * nombre)
{
    this->nombre = nombre;
    this->canciones = new Cancion*[this->cantCanciones];
}

void Autor::addCanciones(char * nombreCancion, Autor * autor)
{
    Cancion ** aux = new Cancion*[this->cantCanciones+1];

    for (int i = 0; i < cantCanciones; ++i) {
        aux[i] = this->canciones[i];
    }

    aux[this->cantCanciones] = new Cancion(nombreCancion, autor);

    this->canciones = aux;

    cantCanciones++;

}

void Autor::mostrarCanciones()
{
    cout<<"Canciones de: "<<this->nombre<<endl;
    for (int i = 0; i < this->cantCanciones; ++i) {
        cout<<i+1<<": "<<this->canciones[i]->getNombre()<<endl;
    }
}

char *Autor::getNombre()
{
    return this->nombre;
}
