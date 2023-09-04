#include "empresa.h"
#include "vc.h"
#include "vd.h"
#include "vmix.h"
#include <iostream>

using namespace std;

int main()
{
    vc viajeComun1("Viaje comun 1", "Crespo",2000);
    cout<<viajeComun1;
    cout<<endl;
    vd viajeDestino1("Viaje destino 1", "Diamante", 200 , 40);
    cout<<viajeDestino1;
    cout<<endl;
    vd viajeDestino2("Viaje destino 2", "Rosario", 200 , 100);
    cout<<viajeDestino2;
    cout<<endl;
    vd viajeDestino3("Viaje destino 3", "Viale", 200 , 15);
    cout<<viajeDestino3;
    cout<<endl;
    vmix viajeMix1("Viaje mix 1",&viajeComun1);
    viajeMix1.addViajesDestino(&viajeDestino1);
    viajeMix1.addViajesDestino(&viajeDestino2);
    viajeMix1.addViajesDestino(&viajeDestino3);
    cout<<viajeMix1;
    cout<<endl;

    empresa flechaBus("Flecha bus!");
    flechaBus.addViaje(&viajeComun1);
    flechaBus.addViaje(&viajeDestino1);
    flechaBus.addViaje(&viajeDestino2);
    flechaBus.addViaje(&viajeDestino3);
    flechaBus.addViaje(&viajeMix1);
    cout<<flechaBus.getValor()<<" "<<flechaBus.getNombre();

    return 0;
}
