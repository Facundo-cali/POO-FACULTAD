#ifndef CATALOGO_H
#define CATALOGO_H
#include "imagen.h"
#include "video.h"


class catalogo
{
private:
    imagen ** imagenes;
    texto ** textos;
    video ** videos;
    int cantTextos = 0;
    int cantImagenes = 0;
    int cantVideos = 0;
public:
    catalogo();
    void addTexto(char * desc);
    void addImagen(char * desc, char * img);
    void addVideo(char * desc, char * img, char * vid);
    void mostrarCatalogo();
};

#endif // CATALOGO_H
