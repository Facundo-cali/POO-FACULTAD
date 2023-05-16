#include <iostream>
#include "gestor.h"


using namespace std;

//2. Es necesario diseñar un sistema que permita calcular los gastos en una empresa, los gastos
//pueden ser gastos por compras, donde se detalla el producto comprado, gastos por servicios
//donde se detalla la compañía que realizo el servicio y por ultimo gastos extraordinarios que
//simplemente tiene una descripción del gasto. El sistema debe presentar un listado de gastos,
//por ejemplo:
//a) Gasto por compra de productos de limpieza …..............$ 3000
//b) Gasto por servicio de la compañía “ServiLimp” …......$ 2500
//c) Gasto extraordinario “Medialunas para la reunión” …..$ 100

int main()
{
    gestor gestor1;

    gestor1.addGasto(300000,"se compraron computadoras",'c');
    gestor1.addGasto(100000,"se compraron muebles",'c');
    gestor1.addGasto(300000,"se compraron teles",'c');
    gestor1.addGasto(300000,"se compraron ventanas",'c');
    gestor1.mostrar();

    return 0;
}
