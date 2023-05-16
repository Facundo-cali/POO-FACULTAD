#ifndef TEXTO_H
#define TEXTO_H


class texto
{
private:
    char * desc;
public:
    texto(char * desc);
    virtual void mostrar();
};

#endif // TEXTO_H
