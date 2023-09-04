#ifndef VD_H
#define VD_H


#include "viaje.h"
class vd : public viaje
{
private:
    char *destino;
    int precioPK;
    int km;
public:
    vd();
    vd(char *nombre, char *destino,int precioPK,int km);
    int getValor();
    char *getDestino() const;
    void setDestino(char *newDestino);

    friend std::ostream& operator<<(std::ostream& cout, vd& obj); //friend sirve para mostrar valores privados.
};

#endif // VD_H
