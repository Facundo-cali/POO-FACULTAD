#include "dep.h"
#include <iostream>


dep::dep(char * nombre)
{
    this->nombre = nombre;
    this->ciudades = new ciudad*[this->cantCiudades];//inicializo el vector dinamico
}

char *dep::getNombre()
{
    return nombre;
}

//vector dinamico
void dep::addCiudad(ciudad * ciudad1)
{
    for (int i = 0; i < cantCiudades; ++i) {
        if (ciudades[i]->getNombre() == ciudad1->getNombre()) {
            std::cout<< "Una ciudad ya fue ingresada y no se agregara 2 veces."<<std::endl;
            return;//no agrega la ciudad duplicada
        }
    }

    ciudad ** aux = new ciudad*[this->cantCiudades + 1];

    for (int i = 0; i < this->cantCiudades; ++i) {
        aux[i] = this->ciudades[i];
    }

    aux[this->cantCiudades] = ciudad1;

    delete[] this->ciudades;

    this->ciudades = aux;

    this->cantCiudades++;

}

//vector dinamico BORRAR CIUDAD
void dep::deleteCiudad(ciudad * ciudad1)
{
    int indiceAEliminar = -1;//posicion no valida

    //verifico si la ciudad esta en el vector y la marco
    for (int i = 0; i < this->cantCiudades; ++i) {
        if (ciudades[i]->getNombre() == ciudad1->getNombre()) {
            indiceAEliminar = i;
            break;
        }
    }

    //si la ciudad esta, la eliminamos
    if (indiceAEliminar != -1) {
        for (int i = indiceAEliminar; i < cantCiudades - 1; ++i) {
            ciudades[i] = ciudades[i + 1];//movemos ciudades restantes hacia atras.(estamos reemplazando el indice a eliminar con la ciudad de adelante)
        }

        ciudades[cantCiudades-1] = nullptr;// Apuntar el último elemento a nullptr
        cantCiudades--;

        ciudad ** aux = new ciudad*[cantCiudades];

        for (int i = 0; i < cantCiudades; ++i) {
            aux[i] = ciudades[i];
        }

        delete[] ciudades;

        this->ciudades = aux;
        std::cout<<"Eliminamos la ciudad"<<std::endl;
    } else {
        std::cout << "La ciudad no fue encontrada." << std::endl;
    }
}

void dep::setNombre(char *newNombre)
{
    nombre = newNombre;
}

int dep::getPoblacion()
{
    int habitantes = 0;
    for (int i = 0; i < this->cantCiudades; ++i) {
        habitantes += ciudades[i]->getHabitantes();
    }
    return habitantes;
}


//asi es con vector estatico
//void dep::addCiudad(ciudad *ciudad)
//{
//    ciudades[this->cantCiudades] = ciudad;
//    this->cantCiudades++;
//}

