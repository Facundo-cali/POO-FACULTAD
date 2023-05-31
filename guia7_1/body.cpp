#include "body.h"
#include <iostream>

using namespace std;

body::body()
{
    this->etiquetasA = new a*[this->cantA];
    this->etiquetasImg = new img*[this->cantImg];
    this->etiquetasP = new p*[this->cantP];
}

void body::addA(char *texto, char *link)
{
    a ** aux = new a*[this->cantA+1];

    // Copiar los objetos gasto desde el vector original a aux
    for(int i = 0; i < this->cantA; i++) {
       aux[i] = this->etiquetasA[i];
    }

    aux[this->cantA] = new a(texto,link);

    cantA++;

    //libero memoria
    delete[] this->etiquetasA;

    this->etiquetasA = aux;
}

void body::addP(char * text)
{
    p ** aux = new p*[this->cantP+1];

    // Copiar los objetos gasto desde el vector original a aux
    for(int i = 0; i < this->cantP; i++) {
       aux[i] = this->etiquetasP[i];
    }

    aux[this->cantP] = new p(text);

    cantP++;

    //libero memoria de gastos
    delete[] this->etiquetasP;

    this->etiquetasP = aux;
}

void body::addImg(char * text)
{
    img ** aux = new img*[this->cantImg+1];

    // Copiar los objetos gasto desde el vector original a aux
    for(int i = 0; i < this->cantImg; i++) {
       aux[i] = this->etiquetasImg[i];
    }

    aux[this->cantImg] = new img(text);

    cantImg++;

    //libero memoria de gastos
    delete[] this->etiquetasImg;

    this->etiquetasImg = aux;
}

void body::mostrar()
{
    cout<<"<body>"<<endl;
    for (int i = 0; i < cantA; ++i) {
        this->etiquetasA[i]->mostrar();
    }
    for (int i = 0; i < cantP; ++i) {
        this->etiquetasP[i]->mostrar();
    }
    for (int i = 0; i < cantImg; ++i) {
        this->etiquetasImg[i]->mostrar();
    }
    cout<<"</body>"<<endl;
}

