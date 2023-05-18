#include "autor.h"
#include "catalogo.h"
#include "disco.h"
#include <iostream>

using namespace std;
//5. Deseamos diseñar un software que mantenga los catálogos de la música, una canción tiene
//un autor que pudo componer varias canciones. A la vez un disco esta compuesto por un
//conjunto de canciones que no necesariamente son de un solo autor.

//nota: en este ejercicio se puede usar polimorfismo, yo no lo hice porque me di cuenta tarde.

int main()
{
    Autor duki("Duki");
    Autor autor1("John Doe");
    Autor autor2("Jane Smith");

    Disco disco1("Disco raro 1");
    disco1.addCanciones("Cancion 1", &autor1);
    disco1.addCanciones("Cancion 2", &autor1);
    disco1.addCanciones("Cancion 3", &autor2);
    disco1.addCanciones("Cancion 4", &autor1);

    Disco disco2("Disco raro 2");
    disco2.addCanciones("Hielo", &duki);
    disco2.addCanciones("Sake", &duki);
    disco2.addCanciones("Cancion 5", &autor2);
    disco2.addCanciones("Cancion 6", &autor2);

    Catalogo catalogo;
    catalogo.addDisco(&disco1);
    catalogo.addDisco(&disco2);

    catalogo.mostrarCanciones();
    return 0;
}
