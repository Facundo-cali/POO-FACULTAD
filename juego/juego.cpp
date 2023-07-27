#include "juego.h"
#include "seriepar.h"
#include "serieimpar.h"
#include "seriepor7.h"
#include <cstdlib>
#include <ctime>

Juego::Juego()
{
    this->generar();
}

void Juego::generar()//genera la serie que se jugara
{
    if (this->serie != 0) delete this->serie;//Si el puntero serie no es nulo (!= 0), significa que ya existe una serie generada anteriormente y debe ser eliminada para evitar fugas de memoria. Por lo tanto, se elimina la serie existente utilizando delete this->serie.
    srand(time(0));
    int semilla = (rand() % 3);
    switch (semilla) {
    case 0:
        this->serie = new SeriePar();
        break;
    case 1:
        this->serie = new SeriePor7();
        break;
    default:
        this->serie = new SerieImpar();
        break;
    }
    this->serie->generar();
}

bool Juego::estaBien(int resp)
{
    if (this->serie->getNros()[2] == resp) {
        this->puntos++;
        this->generar();//cuando el usuario ejecuta esto, se genera un nuevo juego con una nueva serie.
        return true;
    } else {
        this->puntos--;
        this->generar();
        return false;
    }
}

int Juego::getNro1()
{
    return this->serie->getNros()[0];
}

int Juego::getNro2()
{
    return this->serie->getNros()[1];
}

int Juego::getNro4()
{
    return this->serie->getNros()[3];
}

int Juego::getPuntos()
{
    return this->puntos;
}
