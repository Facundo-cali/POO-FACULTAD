#ifndef COMPUESTOS_H
#define COMPUESTOS_H


#include "prod.h"
class compuestos : public prod
{
private:
    int cantProd = 0;
    prod * productos[10];
public:
    compuestos();
    compuestos(char * nom,int precio = 0);
    void addProd(prod *newProd);
    float getPrecio();

};

#endif // COMPUESTOS_H
