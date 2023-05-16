#include "vector.h"


vector::vector(int monto)
{
    this->monto = monto;
}

//cantidad de billetes que tendra el vector
int vector::cantidadDeBilletes(billetes *billetesDisponibles){
    int cantidadDeBilletesDelVector = 0;
    int resto = this->monto;

    for (int i = 0; i < 10; ++i) {
        int cantidad = resto / billetesDisponibles[i].getValor();

        while(cantidad > 0) {
            cantidadDeBilletesDelVector++;
            resto -= billetesDisponibles[i].getValor();
            cantidad = resto / billetesDisponibles[i].getValor();
        }
    }

    return cantidadDeBilletesDelVector;
}



//vector con todos los billetes necesarios
int *vector::cambio(billetes *billetesDisponibles)
{
    int cantidadDeBilletesDelVector = vector::cantidadDeBilletes(billetesDisponibles);


    int *cambio = new int[cantidadDeBilletesDelVector];


    int resto = this->monto;
    int j = 0;
    for (int i = 0; i < 10; ++i) {
        int cantidad = resto / billetesDisponibles[i].getValor();
        while (cantidad > 0) {
            cambio[j] = billetesDisponibles[i].getValor();
            resto -= billetesDisponibles[i].getValor();
            cantidad = resto / billetesDisponibles[i].getValor();
            j++;
        }
    }

    return cambio;
}


