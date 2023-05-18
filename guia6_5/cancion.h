#ifndef CANCION_H
#define CANCION_H

class Autor; // Declaración anticipada de la clase Autor porque tambien uso la clase cancion en la clase autor y si no hago este paso se produce error por recursividad.

class Cancion
{
private:
    char * nombre;
    Autor* autor;
public:
    Cancion(char * nombre, Autor * autor);
    char * getNombre();
    char * getAutor();
};

#endif // CANCION_H
