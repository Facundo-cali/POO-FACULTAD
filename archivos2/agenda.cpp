#include "agenda.h"
#include <iostream>
#include <cstring> // Incluye la cabecera para strcmp

using namespace std;

agenda::agenda(char *nombre)
{
    this->nombre = nombre;
}

char *agenda::getNombre()
{
    return nombre;
}

void agenda::setNombre(char *newNombre)
{
    nombre = newNombre;
}

void agenda::addPersona(persona &nuevaPersona)
{
    personas.push_back(nuevaPersona);
}

void agenda::mostrarPersonas()
{
    cout << "Contactos de agenda: " << this->nombre << endl;
    for (persona& p : personas) {
        this->contPersonas++;
        cout<<this->contPersonas << " - ";
        cout << "Nombre: " << p.getNombre() << ", Apellido: " << p.getApellido() << ", Direccion: " << p.getDireccion() << endl;
    }
}

persona* agenda::elegirPersona(char* nombreBuscado) {
    for (persona& p : personas) {
        if (strcmp(p.getNombre(), nombreBuscado) == 0) {
            return &p; // Devuelve un puntero a la persona si se encuentra por nombre
        }
    }
    return nullptr; // Devuelve nullptr si no se encuentra la persona
}

agenda::agenda()
{

}


