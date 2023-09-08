#ifndef PRODINTER_H
#define PRODINTER_H


#include "prod.h"
class prodInter : public prod
{
private:
    float aumento;
public:
    prodInter();
    prodInter(char * nom, int precio,int aumento);
    float getPrecio();
};

#endif // PRODINTER_H
