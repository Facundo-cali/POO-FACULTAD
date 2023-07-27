#ifndef JUEGO_H
#define JUEGO_H


class Juego
{
private:
    int puntosJug = 0;
    int puntosContri = 0;
    int objContrincante = 0;

public:
    Juego();
    void generar();
    int resultado(int resp);
    int getContri();
    int getPuntosContri();
    int getPuntosJug();
    void setPuntosJug();
    void setPuntosContri();
};

#endif // JUEGO_H
