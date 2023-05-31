#include <iostream>
#include "img.h"

using namespace std;

img::img(char *texto)
{
    this->texto = texto;
}

void img::mostrar()
{
    cout<<"<img href=\""<<this->texto<<"\""<<"/>"<<endl;
}
