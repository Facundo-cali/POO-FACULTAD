#include "ciudad.h"
#include <cctype>

int ciudad::getHabitantes() const
{
    return habitantes;
}

void ciudad::setHabitantes(int newHabitantes)
{
    habitantes = newHabitantes;
}

char *ciudad::getNombre() const
{
    return nombre;
}

void ciudad::setNombre(char *newNombre)
{
    nombre = newNombre;
}

ciudad::ciudad(char * nombre,int habitantes)
{
    this->habitantes = habitantes;
    this->nombre = nombre;
}


std::ostream& operator<<(std::ostream& cout, const ciudad& obj){
    char codigo[4];
    codigo[0] = toupper(obj.nombre[0]); // Convertimos la primera letra a mayúscula
    codigo[1] = toupper(obj.nombre[1]); // Convertimos la segunda letra a mayúscula
    codigo[2] = toupper(obj.nombre[2]); // Convertimos la tercera letra a mayúscula
    codigo[3] = '\0'; // Agregamos el carácter nulo al final para formar una cadena válida
    cout << codigo << std::endl;
    return cout;
}

