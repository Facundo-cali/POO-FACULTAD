//4. Realice una clase VectorDinamico que permita representar un vector dínamico de enteros.
//Esta clase debe permitir:
//a) Saber cuantos elementos hay en el vector
//b) Agregar un elemento al vector
//c) Remover un elemento del vector
//d) Calcular el promedio de los elementos
//e) Saber el mayor elemento
//f) Saber el menor elemento

#include "vectordinamico.h"

VectorDinamico::VectorDinamico(int *n,int tamano){
    this->tamano = tamano; //se inicializa el atributo tamano
    this->vector = new int[this->tamano]; // se reserva memoria dinámica para el vector con el operador new
    for (int i = 0; i < tamano; ++i) { /*se inicializan los elementos del vector en un bucle for*/
        vector[i] = n[i];
    }
}

int VectorDinamico::getTamano(){
    return this->tamano;
}

void VectorDinamico::addElement(int e){
    this->tamano++;
    this->vector[tamano - 1] = e;
}

void VectorDinamico::deleteElement(int e){
    int borrar = -1;
    for (int i = 0; i < this->tamano; ++i) {
        if (this->vector[i] == e) {
            borrar = i;
        }
    }

    if (borrar != -1) {
        int *nuevo = new int[this->tamano - 1];
        int *aux = this->vector;
        for (int i = 0; i < borrar; ++i) {
            nuevo[i] = this->vector[i];
        }
        for (int i = this->tamano - 1; i > borrar ; i--) {
            nuevo[i] = this->vector[i - 1];
        }
        this->vector=nuevo;
        delete[] aux;// Borramos el vector original
        this->tamano--;
    }
}

float VectorDinamico::promedio(){
    float suma = 0;
    for (int i = 0; i < this->tamano; ++i) {
        suma+= this->vector[i];
    }
    float prom = suma/this->tamano;
    return prom;
}

int VectorDinamico::mayor(){
    int mayor = 0;
    for (int i = 0; i < this->tamano; ++i) {
        if (this->vector[i] > mayor) {
            mayor = this->vector[i];
        }
    }
    return mayor;
}

int VectorDinamico::menor(){
    int menor = 9999;
    for (int i = 0; i < this->tamano; ++i) {
        if (this->vector[i] < menor) {
            menor = this->vector[i];
        }
    }
    return menor;
}
