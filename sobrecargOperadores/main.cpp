#include "basicos.h"
#include <iostream>

using namespace std;

int main()
{
    clase clase1,clase2;

    clase clase3 = clase1 + clase2;
    clase clase4 = clase1 - clase2;
    clase clase5 = clase1 * clase2;
    clase clase6 = clase1 / clase2;

    cout<<clase3.a<<" "<<clase3.b<<endl;
    cout<<clase4.a<<" "<<clase4.b<<endl;
    cout<<clase5.a<<" "<<clase5.b<<endl;
    cout<<clase6.a<<" "<<clase6.b<<endl;
    cout<<(clase1 == clase3)<<endl;//da 0 porque es false


    cout<<clase3<<endl;//sobrecarga de operadores de extraccion
    return 0;
}
