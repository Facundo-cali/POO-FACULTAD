#include "p.h"
#include <iostream>

using namespace std;
p::p(char *texto)
{
    this->texto = texto;
}

void p::mostrar()
{
    cout<<"<p>"<<this->texto<<"</p>"<<endl;
}

