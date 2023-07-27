#ifndef CONTACTO_H
#define CONTACTO_H


class Contacto
{
private:
    char* nombre;
    char* telefono;
    char* email;
public:
    Contacto(char* nombre, char* telefono, char* email);
    char* getNombre();
    char* getTel();
    char* getEmail();
};

#endif // CONTACTO_H
