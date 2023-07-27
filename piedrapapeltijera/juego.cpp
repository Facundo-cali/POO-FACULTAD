#include "juego.h"
#include <cstdlib>
#include <random>


Juego::Juego()
{
    this->generar();
}

void Juego::generar() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 2);
    int semilla = dis(gen);

    switch (semilla) {
        case 0:
            this->objContrincante = 0; // piedra
            break;
        case 1:
            this->objContrincante = 1; // papel
            break;
        case 2:
            this->objContrincante = 2; // tijera
            break;
    }
}
int Juego::resultado(int resp)
{
    if (this->objContrincante == resp) {
        return 1;//empate
    }else if((this->objContrincante == 0 && resp == 2) || (this->objContrincante == 1 && resp == 0) || (this->objContrincante == 2 && resp == 1)){
        return 2;//perdiste
    }else{
        return 3;//ganaste;
    }
}

int Juego::getContri()
{
    return this->objContrincante;
}


int Juego::getPuntosContri()
{
    return this->puntosContri;
}

int Juego::getPuntosJug()
{
    return this->puntosJug;
}

void Juego::setPuntosJug()
{
    this->puntosJug++;
}

void Juego::setPuntosContri()
{
    this->puntosContri++;
}


