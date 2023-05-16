#include "cumpleanio.h"
#include <iostream>



cumpleanio::cumpleanio(int dia,int mes, char *nombre)
{
    this->dia = dia;
    this->mes = mes;
    this->nombre = nombre;
}

void cumpleanio::mostrar(){
    std::cout<<"Nombre: "<<this->nombre<<std::endl;
    std::cout<<"Fecha: "<<this->dia<<"/"<<mes<<std::endl;
}
