#include <iostream>
#include "fraccion.h"

Fraccion::Fraccion(int nro) //constructor de la clase Fraccion
{
    this->nro = nro; /*Al utilizar "this", se está diferenciando el parámetro nro del miembro de datos nro de la clase*/
    this->denominador = 1; /*Le asignamos que el denominador del objeto sea 1 predeterminadamente*/
}

Fraccion::Fraccion(int nro, int denominador)//constructor de la clase Fraccion cuando le paso numerador y denominador
{
    int mcd = calcularMcd(nro, denominador); //simplifico la fraccion antes de almacenarla
    this->nro = nro/mcd;//guardo numerador de la clase (recordemos que con el this diferenciamos los parametros de la clase y del metodo)
    this->denominador = denominador/mcd;//guardo denominador
}

int Fraccion::calcularMcd(int nro, int denominador)
{
    int resto = nro % denominador;
    if (resto == 0) return denominador;
    return calcularMcd(denominador, resto);
}


//métodos públicos de la clase Fraccion
Fraccion Fraccion::suma(Fraccion f)/*se espera recibir como parámetro otra fracción para sumarla con la fracción actual.
Por ejemplo, Fraccion f3 = f1.suma(f2); En este caso, f1 es el objeto actual (implícitamente pasado como this) y f2 es el objeto pasado como parámetro Fraccion f.*/
{
    return Fraccion(f.nro * this->denominador + this->nro * f.denominador,this->denominador * f.denominador); // lo que hace esto es retornar la la suma de fracciones a/b + c/d = (a*d + b*c) / (b*d); primero saca el numerador y la "," separa los 2 argumentos que necesita la funcion Fraccion para devolver la fraccion.
}

Fraccion Fraccion::resta(Fraccion f)
{
    return Fraccion(this->nro * f.denominador - f.nro * this->denominador,this->denominador * f.denominador); // lo mismo que la suma pero se usa la formula de la resta.
}

Fraccion Fraccion::multiplicar(Fraccion f)
{
    return Fraccion(f.nro * this->nro,this->denominador * f.denominador);/*lo mismo pero formula de multiplicar*/
}

Fraccion Fraccion::dividir(Fraccion f)
{
    return Fraccion(f.denominador * this->nro,this->denominador * f.nro);/*lo mismo pero formula de dividir*/
}

double Fraccion::mostrarFraccion()
{
   return ((double)this->nro / (double)this->denominador);/*devuelve el valor de la fracción actual como un número decimal.*/
}

const std::string Fraccion::toString() { //devuelve una representación de la fracción actual como una cadena de caracteres (string), en el formato "numerador/denominador".
    std::string s = std::to_string(this->nro);
    s.append("/");
    s.append(std::to_string(this->denominador));
    return s;
}
