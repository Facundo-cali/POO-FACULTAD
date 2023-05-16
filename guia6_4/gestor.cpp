#include "gestor.h"
#include <iostream>

using namespace std;

gestor::gestor()
{
    this->relaciones = new relacion*[this->contRelaciones];
}


void gestor::addRelacion(relacion * relacion1)
{
    relacion ** aux = new relacion*[this->contRelaciones + 1];

    for (int i = 0; i < this->contRelaciones; ++i) {
        aux[i] = this->relaciones[i];
    }

    aux[this->contRelaciones] = relacion1;

    delete[] this->relaciones;

    this->relaciones = aux;

    this->contRelaciones++;

}

//muestra las relaciones
void gestor::mostrarRelaciones()
{
    for (int i = 0; i < this->contRelaciones; ++i) {
        string tipo = this->relaciones[i]->getTipo();
        if(tipo != "grupo" && tipo != "pagina web"){
            cout<<"Relacion de tipo " <<this->relaciones[i]->getTipo()<<" del usuario: "
            << this->relaciones[i]->getUser1() <<" con " << this->relaciones[i]->getUser2()<<"."<<endl;
            cout<<"Relacion de tipo " <<this->relaciones[i]->getTipo()<<" del usuario: "
            << this->relaciones[i]->getUser2() <<" con " << this->relaciones[i]->getUser1()<< "."<<endl;;
        }
    }
    cout<<endl;
    for (int i = 0; i < this->contRelaciones; ++i) {
        string tipo = this->relaciones[i]->getTipo();
        if(tipo != "familia" && tipo != "amistad"){
            cout<<"Relacion de tipo " <<this->relaciones[i]->getTipo()<<" del usuario: "
            << this->relaciones[i]->getUser1() <<" con " << this->relaciones[i]->getUser2()<<"."<<endl;
            cout<<"Relacion de tipo " <<this->relaciones[i]->getTipo()<<" del usuario: "
            << this->relaciones[i]->getUser2() <<" con " << this->relaciones[i]->getUser1()<< "."<<endl;;
        }
    }
}
