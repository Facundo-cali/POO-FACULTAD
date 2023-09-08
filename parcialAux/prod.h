#ifndef PROD_H
#define PROD_H


class prod
{
protected:
    char * nom;
    int precio;
public:
    prod();
    prod(char * nom,int precio);
    virtual float getPrecio() = 0;

    int getPrecioActual();
    char *getNom() const;
};

#endif // PROD_H

