#ifndef FRACCION_H
#define FRACCION_H
#include <iostream>

class Fraccion // 1. defino la clase
{
    private:/*indico que los siguientes datos son privados*/
    int nro; /*numerador*/
    int denominador; /*denominador*/
    int calcularMcd(int nro, int denominador); /*funcion utilizada para simplificar la fracción antes de devolverla como resultado.Por ejemplo si queremos sumar 1/2 y 2/4 el resultado sería 5/4, que no está simplificado En cambio, si simplificamos las fracciones antes de sumarlas podemos sumar 1/2 + 1/2 = 1, que es la respuesta correcta.*/

    public:/*indica que los siguientes miembros de la clase son públicos y se pueden acceder fuera de la clase.*/
    //CONSTRUCTORES:
    Fraccion(int nro);/*crea la fraccion cuando solo se pasa un numerador*/
    Fraccion(int nro, int denominador);/*crea la fraccion cuando se pasan numerador y denominador*/

    //métodos públicos que realizan operaciones matemáticas con fracciones:
    Fraccion suma(Fraccion f);
    Fraccion resta(Fraccion f);
    Fraccion multiplicar(Fraccion f);
    Fraccion dividir(Fraccion f);
    double mostrarFraccion();//devuelve la fracción como un número decimal
    const std::string toString();/*devuelve la fracción como una cadena de texto.*/
};

#endif // FRACCION_H
