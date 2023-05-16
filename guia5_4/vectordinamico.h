//4. Realice una clase VectorDinamico que permita representar un vector dínamico de enteros.
//Esta clase debe permitir:
//a) Saber cuantos elementos hay en el vector
//b) Agregar un elemento al vector
//c) Remover un elemento del vector
//d) Calcular el promedio de los elementos
//e) Saber el mayor elemento
//f) Saber el menor elemento


#ifndef VECTORDINAMICO_H
#define VECTORDINAMICO_H


class VectorDinamico
{
    private:
        int *vector; //puntero donde se inicializara el vector dinamico
        int tamano;//tamaño del vector
    public:
        VectorDinamico(int * n,int tamano); //el constructor toma el puntero para inicializar el vector y el tamano.
        int getTamano();
        void addElement(int e);
        void deleteElement(int e);
        float promedio();
        int mayor();
        int menor();
};

#endif // VECTORDINAMICO_H
