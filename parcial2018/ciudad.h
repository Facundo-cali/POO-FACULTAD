#ifndef CIUDAD_H
#define CIUDAD_H


#include <ostream>
class ciudad
{
private:
    char * nombre;
    int habitantes;
public:
    ciudad(char * nombre, int habitantes);
    int getHabitantes() const;
    void setHabitantes(int newHabitantes);
    char *getNombre() const;
    void setNombre(char *newNombre);
    char *getCodigo();


    friend std::ostream& operator<<(std::ostream& cout, const ciudad& obj); //friend sirve para mostrar valores privados.

};

#endif // CIUDAD_H
