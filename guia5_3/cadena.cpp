#include "cadena.h"

Cadena::Cadena(char * c){
    this->c = c;
    while (this->c[this->cant]!= '\0'){
        this->cant++;
    }/*Para contar la cantidad de caracteres se utiliza este ciclo while que cuenta la cantidad de caracteres distintos al caracter nulo hay en la cadena*/

    this->cant++;//este ultimo cant++ es necesario para incluir el carácter nulo al final de la cadena.
}

int Cadena::getCant(){ //SIEMPRE se le pasa el tipo de valor que va a retornar (en este caso int)
    return this->cant - 1; // devuelvo la cantidad de caracteres -1 (por el caracter nulo)
}

char * Cadena::getC(){ //retorna un puntero, asique debo poner el "*".Apunta a la dirección de memoria donde se encuentra almacenada la cadena de caracteres c
    return this->c;
}

Cadena Cadena::toupper(){ //el primer Cadena es para decir que es de tipo Cadena, porque devuelve un objeto de esta clase.
    char *enMayus = new char[this->cant];
    for (int i = 0; i < this->cant; ++i) {
        if(this->c[i] >= 'a' && this->c[i] <= 'z') {
            enMayus[i] = this->c[i] - 32;
        } else {
            enMayus[i] = this->c[i];
        }
    }

    return enMayus;
}

void Cadena::add(char otro){ //agrega un nuevo valor al final de la cadena.
    char *nuevo = new char[this->cant + 1];
    for (int i = 0; i < cant; ++i) {
        nuevo[i] = this->c[i];
    }
    nuevo[this->cant - 1] = otro;
    nuevo[this->cant] = '\0';
    this->cant++;
    this->c = nuevo;
}
