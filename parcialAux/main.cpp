#include "compuestos.h"
#include "empresa.h"
#include "prodinter.h"
#include "prodnac.h"
#include <iostream>

using namespace std;

int main()
{
    prodNac prodNac1("Libro", 20);
    cout<<prodNac1.getNom()<<" tiene un precio de: "<<prodNac1.getPrecio()<<endl;
    prodInter prodInter1("Internacional 1",50,10);
    cout<<prodInter1.getNom()<<" tiene un precio de: "<<prodInter1.getPrecio()<<endl;
    compuestos comp1("Compuesto 1");
    comp1.addProd(&prodInter1);
    comp1.addProd(&prodNac1);
    cout<<comp1.getNom()<<" "<<comp1.getPrecio()<<endl;

    cout<<"Creamos empresa: "<<endl;
    empresa empresa1("Empresa 1");
    empresa1.addProd(&prodNac1);
    empresa1.addProd(&prodInter1);
    empresa1.addProd(&comp1);
    empresa1.getPrecios();
    return 0;
}
