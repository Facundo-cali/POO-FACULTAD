#ifndef IMAGEN_H
#define IMAGEN_H
#include "texto.h"


class imagen : public texto
{
private:
    char * img;
public:
    imagen(char * desc, char * img);
    void mostrar();
};

#endif // IMAGEN_H
