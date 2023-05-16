#include "catalogo.h"
#include <iostream>

using namespace std;

//3. El departamento de marqueting de una empresa desea un software que diseñe su catalogo
//online de venta estos son preparados de forma mensual y constan de artículos que pueden
//ser, solo texto, con imágenes, o multimedia con vídeos. Diseñe un software que permita
//organizar los catálogos


int main()
{
    catalogo catalogo1;

    catalogo1.addTexto("Televisor");
    catalogo1.addImagen("Puerta","puerta.jpg");
    catalogo1.addVideo("Equipo de musica","equipo.jpg","videoEquipo.mp4");

    catalogo1.addTexto("Televisor2");
    catalogo1.addImagen("Puerta2","puerta2.jpg");
    catalogo1.addVideo("Equipo de musica2","equipo2.jpg","videoEquipo2.mp4");
    catalogo1.mostrarCatalogo();

    return 0;
}
