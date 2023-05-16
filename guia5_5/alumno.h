#ifndef ALUMNO_H
#define ALUMNO_H


class Alumno
{
private:
    char * nombre;
    int dni;
    int notas[4];
public:
    Alumno();// ESTO ES IMPORTANTISIMO  Su función es inicializar los atributos de la clase con valores predeterminados.
    Alumno(int dni);
    int getDni();
    char * getNombre();
    int * getNotas();
    void setNota(int nro, int nota);
    void setNombre(char * nombre);
    int promedio();
};

#endif // ALUMNO_H

