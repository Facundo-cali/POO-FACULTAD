#ifndef GASTO_H
#define GASTO_H


class gasto
{
private:
    int monto;
    char * desc;
    char tipo;
public:
    gasto(int monto, char * desc, char tipo);
    int getMonto();
    char *getDesc();
    char getTipo();
};

#endif // GASTO_H
