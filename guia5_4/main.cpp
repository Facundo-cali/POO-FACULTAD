//4. Realice una clase VectorDinamico que permita representar un vector dínamico de enteros.
//Esta clase debe permitir:
//a) Saber cuantos elementos hay en el vector
//b) Agregar un elemento al vector
//c) Remover un elemento del vector
//d) Calcular el promedio de los elementos
//e) Saber el mayor elemento
//f) Saber el menor elemento

#include <iostream>
#include "vectordinamico.h"

using namespace std;

int main()
{
    int elementos[] = {40, 22, 105, 66, 92};
    VectorDinamico vector(elementos, 5);

    cout << "El tamano del vector es: " << vector.getTamano() << endl;

    // Utilizamos el método addElement para agregar un elemento al vector
    vector.addElement(6);

    // Utilizamos el método deleteElement para eliminar un elemento del vector
    vector.deleteElement(3);

    // Utilizamos el método promedio para calcular el promedio de los elementos del vector
    cout << "El promedio de los elementos del vector es: " << vector.promedio() << endl;

    // Utilizamos el método mayor para obtener el elemento mayor del vector
    cout << "El elemento mayor del vector es: " << vector.mayor() << endl;

    // Utilizamos el método menor para obtener el elemento menor del vector
    cout << "El elemento menor del vector es: " << vector.menor() << endl;

    cout << "El tamano del vector es: " << vector.getTamano() << endl;

    return 0;
}
