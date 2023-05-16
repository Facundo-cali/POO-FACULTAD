#ifndef ARTICULO_H
#define ARTICULO_H


class articulo
{
private:
    char * texto;
    char * imagen;
    char * video;
public:
    articulo();
    articulo(char * texto, char * imagen, char * video);
};

#endif // ARTICULO_H
