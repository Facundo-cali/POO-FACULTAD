#ifndef SERIE_H
#define SERIE_H


class Serie //clase padre
{
protected:
    int nros[4];
public:
    Serie();
    void virtual generar() = 0;//se inicializa en 0 debido a que es una función puramente virtual o abstracta.La inicialización con 0 indica que no se proporciona una implementación predeterminada para la función en la clase base.
    int *getNros();
};

#endif // SERIE_H
