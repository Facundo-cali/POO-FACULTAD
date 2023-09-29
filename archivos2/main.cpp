#include "agenda.h"
#include "persona.h"
#include <cstring>
#include <iostream>

using namespace std;

//Debe realizar una agenda que permita guardar personas con sus contactos.
//-Una persona tiene un nombre, apellido, dirección y contactos
//-Un contacto tiene un tipo (email, teléfono, celular, fax, whatsapp, etc) y un valor
//La agenda debe guardar los contactos en un archivo binario y debe permitir buscar personas para saber sus datos

int main()
{

    cout<<"Bienvenido a las agendas: "<<endl;
    agenda agenda1("Agenda 2023");
    persona facundo("Facundo","Cali","Calle Alvarado");
    persona juan("Juan", "Perez", "Avenida Principal");
    persona maria("Maria", "Gonzalez", "Calle del Sol");
    persona ana("Ana", "Lopez", "Calle Rosales");
    persona carlos("Carlos", "Martinez", "Avenida Libertad");
    persona laura("Laura", "Rodriguez", "Calle de la Luna");
    persona diego("Diego", "Fernandez", "Avenida Principal");
    persona sofia("Sofia", "Gomez", "Calle del Bosque");

    contacto contacto1("email", "contacto1@gmail.com");
    contacto contacto2("telefono", "111-222-3333");
    contacto contacto3("celular", "444-555-6666");
    contacto contacto4("fax", "777-888-9999");
    contacto contacto5("whatsapp", "123-456-7890");
    contacto contacto6("email", "contacto6@example.com");
    contacto contacto7("telefono", "555-555-5555");
    contacto contacto8("celular", "777-777-7777");
    contacto contacto9("fax", "999-999-9999");
    contacto contacto10("whatsapp", "123-123-1234");

    // Agregar contactos a cada persona
    facundo.addContacto("Facundo.dat",contacto1);
    juan.addContacto("Juan.dat",contacto2);
    maria.addContacto("Maria.dat",contacto3);
    ana.addContacto("Ana.dat",contacto4);
    carlos.addContacto("Carlos.dat",contacto5);
    laura.addContacto("Laura.dat",contacto6);
    diego.addContacto("Diego.dat",contacto7);
    sofia.addContacto("Sofia.dat",contacto8);
    facundo.addContacto("Facundo.dat",contacto9);
    juan.addContacto("Juan.dat",contacto10);

    agenda1.addPersona(facundo);
    agenda1.addPersona(juan);
    agenda1.addPersona(maria);
    agenda1.addPersona(ana);
    agenda1.addPersona(carlos);
    agenda1.addPersona(laura);
    agenda1.addPersona(diego);
    agenda1.addPersona(sofia);

    agenda1.mostrarPersonas();



    char nombreElegido[50]; // Ajusta el tamaño según tus necesidades
    cout << "Ingrese el nombre que desee: " << endl;
    cin >> nombreElegido;

    // Agregar la extensión .dat al nombre ingresado
    char nombreArchivo[50]; // Ajusta el tamaño según tus necesidades
    strncpy(nombreArchivo, nombreElegido,50);
    strncat(nombreArchivo, ".dat",50);

    persona* personaElegida = agenda1.elegirPersona(nombreElegido);

    if (personaElegida) {
        cout << "------------------" << endl;
        personaElegida->mostrarContactosDesdeArchivo(nombreArchivo);
        cout << "------------------" << endl;
    } else {
        cout << "Persona no encontrada." << endl;
    }


    return 0;
}

