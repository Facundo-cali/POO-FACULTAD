#ifndef CONTACTO_H
#define CONTACTO_H


class contacto
{
private:
    char * tipo;
    char * valor;
public:
    contacto();
    contacto(char * tipo, char * valor);

    char *getTipo();
    void setTipo(char *newTipo);
    char *getValor();
    void setValor(char *newValor);

};

#endif // CONTACTO_H
