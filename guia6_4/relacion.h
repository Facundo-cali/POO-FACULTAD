#ifndef RELACION_H
#define RELACION_H



// su funcion es realizar la relacion entre el usuario y otro usuario, incluyendo el tipo, se le pasan 2 usuarios.
#include "user.h"
class relacion
{
private:
    char * tipo;
    user * usuariosRelacionados[2];
public:
    relacion();
    relacion(char * tipo,user * user1,user * user2);
    char *getTipo();
    char *getUser1();
    char *getUser2();
};

#endif // RELACION_H
