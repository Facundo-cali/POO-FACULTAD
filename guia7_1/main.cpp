#include "body.h"
#include <iostream>

using namespace std;

int main()
{
    body body1;
    body1.addA("etiqueta a","linkA.com");
    body1.addImg("imagen.png");
    body1.addP("etiqueta p");

    body1.mostrar();
    return 0;
}
