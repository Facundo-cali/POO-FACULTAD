#include <iostream>
#include "fraccion.h"

using namespace std;

//2. Realice una clase que represente una Fracción.
//a) Un objeto fracción solo se puede construir a partir de un numerador y denominador.
//b) Un objeto fracción debe poder sumar, restar, multiplicar y dividir.
//c) Un objeto fracción debe poder simplificarse

int main()
{
    Fraccion f = Fraccion(55, 10);
    double d = f.mostrarFraccion();
    cout << d << endl;
    cout << f.toString() << " le sumamos " << Fraccion(3).toString() << " = " << f.suma(Fraccion(3)).toString() << endl;
    cout << f.toString() << " le resta " << Fraccion(3).toString() << " = " << f.resta(Fraccion(3)).toString() << endl;
    cout << f.toString() << " le sumamos " << Fraccion(1,2).toString() << " = " << f.suma(Fraccion(1,2)).toString() << endl;
    return 0;
}
