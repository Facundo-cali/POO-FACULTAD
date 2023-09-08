#ifndef PRODNAC_H
#define PRODNAC_H


#include "prod.h"
class prodNac : public prod
{
public:
    prodNac();
    prodNac(char * nom,int precio);
    float getPrecio();
};

#endif // PRODNAC_H
