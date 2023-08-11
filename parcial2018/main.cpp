#include "dep.h"
#include "provincia.h"
#include <iostream>

using namespace std;

int main()
{
    dep paranaa("Entre Rios");
    dep santafe("Santa Fe");
    cout << "Poblacion entre rios:"<< paranaa.getPoblacion()<<endl;
    cout << "Poblacion Santa Fe:"<< santafe.getPoblacion()<<endl;
    ciudad rosario("Rosario", 1000000);
    ciudad parana("Parana", 350000);
    ciudad diamante("Diamante", 100000);
    cout << "Poblacion entre rios:"<< parana.getHabitantes()<<endl;
    cout << "Poblacion diamante:"<< diamante.getHabitantes()<<endl;
    paranaa.addCiudad(&parana);
    paranaa.addCiudad(&diamante);
    santafe.addCiudad(&rosario);
    cout << "Poblacion Parana departamento:"<< paranaa.getPoblacion()<<endl;
    provincia entreRios("Entre Rios");
    entreRios.addDep(&paranaa);
    cout<<entreRios.getPoblacion()<<endl;
    cout<<rosario<<endl;//codigo ciudad

    paranaa.deleteCiudad(&diamante);
    cout << "Poblacion Parana departamento:"<< paranaa.getPoblacion()<<endl;
    return 0;
}
