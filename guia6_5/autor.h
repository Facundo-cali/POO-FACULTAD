#ifndef AUTOR_H
#define AUTOR_H


class Cancion;

class Autor
{
private:
    char * nombre;
    Cancion ** canciones;
    int cantCanciones = 0;
public:
    Autor(char * nombre);
    void addCanciones(char * nombreCancion, Autor * autor);
    void mostrarCanciones();
    char *getNombre();
};

#endif // AUTOR_H
