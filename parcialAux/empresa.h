#ifndef EMPRESA_H
#define EMPRESA_H


#include "prod.h"
class empresa
{
private:
    char * nom;
    int cantProd = 0;
    prod * prodEmpresa[50];
public:
    empresa();
    empresa(char *nom);
    void addProd(prod *newProd);

    void getPrecios();
};

#endif // EMPRESA_H
