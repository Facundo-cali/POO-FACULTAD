#include <iostream>
#include "cadena.h"
/*3. Realice una clase Cadena que permita representar una cadena cstring. La cadena debe
permitir:
a) Saber cuantos caracteres tiene la cadena
b) Agregar un carácter al final
c) Agregar un carácter al principio
d) Remover la primera ocurrencia de un carácter pasado por parámetro.
e) Retornar una cadena en mayúscula.*/

using namespace std;

int main()
{
    Cadena unaCadena("Hello World!");//creo la cadena
    cout << unaCadena.getCant() << endl;//accedo al metodo del objeto
    cout << unaCadena.toupper().getC() << endl;/*se llama al método getC() del nuevo objeto devuelto por toupper(), lo que devuelve un puntero al arreglo de caracteres que representa la cadena en mayúsculas*/
    unaCadena.add('!');
    cout << unaCadena.getC() << endl;
    return 0;
}
