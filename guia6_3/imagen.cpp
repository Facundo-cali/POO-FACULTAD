#include "imagen.h"
#include <iostream>
using namespace std;

imagen::imagen(char * desc, char * img) : texto(desc)
{
    this->img = img;
}

void imagen::mostrar()
{
    texto::mostrar();
    cout<<" "<<this->img;
}

//char *imagen::getTexto()
//{
//    return this->texto;
//}

//char *imagen::getImg()
//{
//    return this->img;
//}
