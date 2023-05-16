#include "catalogo.h"
#include <iostream>
using namespace std;

catalogo::catalogo()
{
    this->textos = new texto*[this->cantTextos];
    this->imagenes = new imagen*[this->cantImagenes];
    this->videos = new video*[this->cantVideos];
}

void catalogo::addTexto(char * desc)
{
    texto ** aux = new texto*[this->cantTextos+1];

    // Copiar los objetos gasto desde el vector original a aux
    for(int i = 0; i < this->cantTextos; i++) {
       aux[i] = this->textos[i];
    }

    aux[this->cantTextos] = new texto(desc);

    cantTextos++;

    //libero memoria de gastos
    delete[] this->textos;

    this->textos = aux;
}

void catalogo::addImagen(char *desc, char *img)
{
    imagen ** aux = new imagen*[this->cantImagenes+1];

    // Copiar los objetos gasto desde el vector original a aux
    for(int i = 0; i < this->cantImagenes; i++) {
       aux[i] = this->imagenes[i];
    }

    aux[this->cantImagenes] = new imagen(desc,img);

    cantImagenes++;

    //libero memoria de gastos
    delete[] this->imagenes;

    this->imagenes = aux;
}

void catalogo::addVideo(char *desc, char *img, char *vid)
{
    video ** aux = new video*[this->cantVideos+1];

    // Copiar los objetos gasto desde el vector original a aux
    for(int i = 0; i < this->cantVideos; i++) {
       aux[i] = this->videos[i];
    }

    aux[this->cantVideos] = new video(desc,img,vid);

    cantVideos++;

    //libero memoria de gastos
    delete[] this->videos;

    this->videos = aux;
}

void catalogo::mostrarCatalogo()
{
    for (int i = 0; i < cantTextos; ++i) {
        this->textos[i]->mostrar();
        cout<<endl;
    }
    for (int i = 0; i < cantImagenes; ++i) {
        this->imagenes[i]->mostrar();
        cout<<endl;
    }
    for (int i = 0; i < cantVideos; ++i) {
        this->videos[i]->mostrar();
        cout<<endl;
    }
}

