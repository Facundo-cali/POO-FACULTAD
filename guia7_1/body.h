#ifndef BODY_H
#define BODY_H
#include "a.h"
#include "img.h"
#include "p.h"


class body
{
private:
   a ** etiquetasA;
   p ** etiquetasP;
   img ** etiquetasImg;
   int cantA = 0;
   int cantImg = 0;
   int cantP = 0;
public:
    body();
    void addA(char * texto,char * link);
    void addP(char * text);
    void addImg(char * text);
    void mostrar();
};

#endif // BODY_H
