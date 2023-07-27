#ifndef SERIE_H
#define SERIE_H


class Serie //esta es la clase PADRE de las series que conformaran el juego.
{
protected:
    int nros[4];
public:
    Serie();
    void virtual generar() = 0; // este metodo sirve para generar los numeros de las secuencias.Se inicializa en 0 para indicar que no tiene una implementación concreta en la clase base, y que debe ser implementada en las clases derivadas.
    int *getNros(); //es el getter de los numeros de la secuencia
};

#endif // SERIE_H
