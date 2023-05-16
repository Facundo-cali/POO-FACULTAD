#include "texto.h"
#include <iostream>
using namespace std;

texto::texto(char *desc)
{
    this->desc = desc;
}

void texto::mostrar()
{
    cout<<"Articulo: "<<this->desc;
}

//char *texto::getDesc()
//{
//    return this->desc;
//}
