#include <iostream>
#include "juego.h"

using namespace std;

//nota: es el mismo que esta en el repositorio del profe

int main()
{

    cout << "Hola " << endl;

    Juego juego;

    char op = 's';
    while (op == 's') {
        cout << juego.getNro1()  << " " << juego.getNro2() << "____" << " " << juego.getNro4() << endl;

        int resp;

        cin >> resp;

        if (juego.estaBien(resp)) {
            cout << " Ganaste :) "<< juego.getPuntos() << endl;
        } else {
            cout << " Perdiste :C  "<< juego.getPuntos() << endl;
        }

        cout << " Desea seguir jugando? (s/n)  ";
        cin >> op;
        cout << endl;
    }

    return 0;
}
