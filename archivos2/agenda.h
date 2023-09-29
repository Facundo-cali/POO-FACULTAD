#ifndef AGENDA_H
#define AGENDA_H
#include "persona.h"
#include <vector>
using namespace std;

class agenda
{
private:
    char * nombre;
    vector<persona> personas;
    int contPersonas = 0;

public:
    agenda();
    agenda(char * nombre);
    char *getNombre();
    void setNombre(char *newNombre);
    void addPersona(persona &nuevaPersona);
    void mostrarPersonas();
    persona* elegirPersona(char *nombreBuscado);
};

#endif // AGENDA_H
