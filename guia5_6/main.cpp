#include <iostream>
#include "billetes.h"
#include "vector.h"

using namespace std;

//6. Realice un software que dado un monto en dinero retorne un vector de los billetes y
//monedas que debe retornar. El software debe dar prioridad a billetes con mayor
//denominación. Los billetes son de 1000, 500, 200, 100, 50, 20, 10 y monedas de 5, 2, 1. Por
//ejemplo dado el monto 545 el software debe retornar el vector con los billetes [ 500, 20, 20,
//5]

int main()
{
    const int cantidadBilletes = 10; // La cantidad total de billetes disponibles
    //defino el valor de los billetes
    billetes billetesDisponibles[cantidadBilletes] = {
        billetes(1000),
        billetes(500),
        billetes(200),
        billetes(100),
        billetes(50),
        billetes(20),
        billetes(10),
        billetes(5),
        billetes(2),
        billetes(1)
    };

    //creo el objeto vector
    vector miVector(11243);//supongamos que el usuario ingreso este monto

    //cantidad de billetes que se daran
    int cant = miVector.cantidadDeBilletes(billetesDisponibles);

    //defino el vector y llamo el metodo cambio, que devuelve un vector con los billetes
    int *vec = miVector.cambio(billetesDisponibles);

    //muestro en pantalla
    for (int i = 0; i < cant; ++i) {
        cout<< vec[i] << "  ";
    }





    return 0;
}
