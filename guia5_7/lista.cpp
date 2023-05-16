#include "cumpleanio.h"
#include "lista.h"
#include <iostream>

lista::lista(int cantCumples)
{
    this->cant = cantCumples;
}

void lista::cargar(char *n,int d,int m){
    this->cumpleanios[indice]=cumpleanio(d,m,n);//aca creo los cumpleanios en el vector
    indice++;
}

void lista::mostrar(){
    for(int i=0;i<this->cant;i++){
        this->cumpleanios[i].mostrar();
        std::cout<<std::endl;
    }
}




