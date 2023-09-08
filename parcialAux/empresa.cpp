#include "empresa.h"
#include <iostream>

using namespace std;

empresa::empresa()
{

}

empresa::empresa(char *nom)
{
    this->nom = nom;
}

void empresa::addProd(prod *newProd)
{
    this->prodEmpresa[this->cantProd] = newProd;
    this->cantProd++;
}

void empresa::getPrecios()
{
    cout<<endl<<endl;
    cout<<"Productos precio actual: "<<endl;
    for (int i = 0; i < this->cantProd; ++i) {
        cout<< this->prodEmpresa[i]->getNom() << " precio actual: " << this->prodEmpresa[i]->getPrecioActual() << "  precio ajustado: "<< this->prodEmpresa[i]->getPrecio()<<endl;
    }
}
