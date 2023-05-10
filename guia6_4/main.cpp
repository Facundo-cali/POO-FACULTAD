#include "gestor.h"
#include "relacion.h"
#include "user.h"
#include <iostream>

using namespace std;

//4. Una empresa nos contrata para diseñar su software de tipo red social. Un usuario puede estar
//conectado con otros usuarios por medio de relaciones, amistad, familia, etc. El usuario
//puede definir sus relaciones. A la vez un usuario puede tener relaciones no solo con otros
//usuarios sino también con grupos o paginas web.

int main()
{
    //creo usuarios
    user facu("facu");
    user kevin("kevin");
    user candela("candela");
    user carlos("carlos");
    user escuela("escuela");

    //creo relaciones
    relacion familiaCandelaCarlos("familia",&candela,&carlos);
    relacion grupoCandelaEscuela("grupo",&candela,&escuela);
    relacion amistadFacuKevin("amistad",&facu,&kevin);


    //agrego relaciones y las muestro
    gestor relaciones;
    relaciones.addRelacion(&amistadFacuKevin);
    relaciones.addRelacion(&familiaCandelaCarlos);
    relaciones.addRelacion(&grupoCandelaEscuela);
    relaciones.mostrarRelaciones();
    return 0;
}
