#ifndef ELEMENTO_H
#define ELEMENTO_H


class elemento
{
private:
    char * texto;
    char * link;
    char * etiqueta;
public:
    elemento(char * texto, char *etiqueta);
    elemento(char * texto,char * link, char *etiqueta);
    void addP(char * texto);
    void addLink(char * link, char * texto);
    void addImg(char * texto);
    virtual void mostrar(char *etiqueta);
};

#endif // ELEMENTO_H
