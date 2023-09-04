#ifndef VC_H
#define VC_H


#include "viaje.h"

class vc : public viaje
{
private:
    char *destino;
    int valor;
public:
    vc();
    vc(char *nombre, char *destino, int valor);
    char *getDestino() const;
    void setDestino(char *newDestino);
    int getValor();

    friend std::ostream& operator<<(std::ostream& cout, vc& obj); //friend sirve para mostrar valores privados.
};

#endif // VC_H
