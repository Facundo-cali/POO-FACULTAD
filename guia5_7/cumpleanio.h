#ifndef CUMPLEANIO_H
#define CUMPLEANIO_H


class cumpleanio
{
private:
    int dia;
    int mes;
    char * nombre; //un puntero a un carácter que almacena la cadena cstring.
public:
    cumpleanio(int dia,int mes, char * nombre);
    void mostrar();
};

#endif // CUMPLEANIO_H
