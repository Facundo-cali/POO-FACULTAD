#ifndef VMIX_H
#define VMIX_H


#include "vc.h"
#include "vd.h"
#include "viaje.h"
class vmix : public viaje
{
private:
    int cantViajes =0;
    vc * viajeComun;
    vd ** viajesDestino;
public:
    vmix();
    vmix(char * nombre, vc * viajeComun);
    int getValor();
    void addViajesDestino(vd * viaje);

    friend std::ostream& operator<<(std::ostream& cout, vmix& obj); //friend sirve para mostrar valores privados.
};

#endif // VMIX_H
