//3. Realice una clase Cadena que permita representar una cadena cstring. La cadena debe
//permitir:
//a) Saber cuantos caracteres tiene la cadena
//b) Agregar un carácter al final
//c) Agregar un carácter al principio
//d) Remover la primera ocurrencia de un carácter pasado por parámetro.
//e) Retornar una cadena en mayúscula.

#ifndef CADENA_H
#define CADENA_H

class Cadena
{
    private:
        char * c; //un puntero a un carácter que almacena la cadena cstring.
        int cant = 0; //se inicializa en 0 porque al crear una instancia de la clase Cadena, aún no se ha agregado ningún carácter.
    public:
        Cadena(char * c); //el constructor toma un puntero a un carácter como argumento e inicializa la cadena y la cantidad de caracteres.
        int getCant(); /*devuelve la cantidad de caracteres en la cadena.*/
        char * getC(); /*devuelve un puntero al primer carácter en la cadena.*/
        Cadena toupper();/*devuelve una nueva Cadena en mayúscula*/
        void add(char otro);//es una función que agrega un carácter al final de la cadena.
};

#endif // CADENA_H
