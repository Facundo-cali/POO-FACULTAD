#include "gestor.h"
#include <iostream>

gestor::gestor()
{
    this->gastos = new gasto*[this->cant];
}

void gestor::addGasto(int monto, char *desc, char tipo)
{

    gasto ** aux = new gasto*[this->cant+1];

    // Copiar los objetos gasto desde el vector original a aux
    for(int i = 0; i < this->cant; i++) {
       aux[i] = this->gastos[i];
    }

    aux[this->cant] = new gasto(monto,desc,tipo);

    this->cant++;

    //libero memoria de gastos
    delete[] this->gastos;

    //asigno aux a gastos
    this->gastos = aux;
}

void gestor::mostrar()
{
    for (int i = 0; i < this->cant; ++i) {
        std::cout<<i+1<<") Gasto " << gastos[i]->getDesc()<<" tipo "<<gastos[i]->getTipo()<<" monto "<<gastos[i]->getMonto()<<std::endl;
    }
}
