#include "a.h"
#include <iostream>

using namespace std;
a::a(char * texto,char * link)
{
    this->link = link;
    this->texto = texto;
}

void a::mostrar()
{
    cout<<"<a href=\""<< this->link <<"\">"<<this->texto<<"</a>"<<endl;
}

