#ifndef BASICOS_H
#define BASICOS_H


#include <ostream>
class clase
{
public:
    int a=10;
    int b=20;

    clase operator+(clase other);
    clase operator-(clase other);
    clase operator*(clase other);
    clase operator/(clase other);
    bool operator==(clase other);


    friend std::ostream& operator<<(std::ostream& cout, const clase& obj); //friend sirve para mostrar valores privados.
};

#endif // BASICOS_H
