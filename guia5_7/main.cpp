#include <iostream>
#include "lista.h"

using namespace std;

//7. Realice un software que permita mantener las fechas de cumpleaños de sus amistades. El
//software debe permitir cargar un cumpleaños y listar los cumpleaños cargados.

int main()
{
    lista listaUno(2);
    listaUno.cargar("facu",8,1);
    listaUno.cargar("rama",10,2);
    listaUno.mostrar();

    return 0;
}
