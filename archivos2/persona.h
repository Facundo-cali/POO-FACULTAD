#ifndef PERSONA_H
#define PERSONA_H
#include "contacto.h"
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

struct contactoData {
    char tipo[50];
    char valor[50];
};


class persona
{
private:
    char * nombre;
    char * apellido;
    char * direccion;
public:
    persona();
    persona(char * nombre, char * apellido, char * direccion);
    char *getNombre() ;
    void setNombre(char *newNombre);
    char *getApellido() ;
    void setApellido(char *newApellido);
    char *getDireccion() ;
    void setDireccion(char *newDireccion);
    void addContacto(char *nombreArchivo, contacto &nuevoContacto);

    void mostrarContactosDesdeArchivo(const char *nombreArchivo);
};

#endif // PERSONA_H
