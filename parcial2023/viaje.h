#ifndef VIAJE_H
#define VIAJE_H


#include <ostream>
class viaje
{
protected:
    char *nombre;
public:
    viaje();
    viaje(char *nombre);
    virtual int getValor() = 0;
    char *getNombre() const;
    void setNombre(char *newNombre);


};

#endif // VIAJE_H
