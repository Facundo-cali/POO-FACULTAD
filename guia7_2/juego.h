#ifndef JUEGO_H
#define JUEGO_H
#include "serie.h"

class Juego
{
private:
    int puntos = 0;
    Serie * serie = 0;//almacena la serie actual que se está presentando al jugador.
    void generar();//método privado que se encarga de generar una nueva serie.es privado porque su objetivo es ser utilizado internamente por la propia clase Juego y no debe ser accesible desde fuera de la clase.
public:
    Juego();
    bool estaBien(int resp);
    int getNro1();
    int getNro2();
    int getNro4();
    int getPuntos();
};

#endif // JUEGO_H
