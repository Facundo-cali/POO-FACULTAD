#include "persona.h"
#include <cstring>
#include <iostream>
#include <fstream> //Para manejo de archivos

using namespace std;

persona::persona()
{

}

persona::persona(char *nombre, char *apellido, char *direccion)
{
    this->nombre = nombre;
    this->apellido = apellido;
    this->direccion = direccion;

    // Generar un nombre de archivo único para la persona
    string nombreArchivo = string(nombre) + ".dat";
}

char *persona::getNombre()
{
    return nombre;
}

void persona::setNombre(char *newNombre)
{
    nombre = newNombre;
}

char *persona::getApellido()
{
    return apellido;
}

void persona::setApellido(char *newApellido)
{
    apellido = newApellido;
}

char *persona::getDireccion()
{
    return direccion;
}

void persona::setDireccion(char *newDireccion)
{
    direccion = newDireccion;
}

void persona::addContacto(char* nombreArchivo, contacto& nuevoContacto) {
    std::ofstream archivo(nombreArchivo, std::ios::binary | std::ios::app);

    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo para escritura." << std::endl;
        return;
    }

    contactoData nuevo;
    char* tipo = nuevoContacto.getTipo();
    char* valor = nuevoContacto.getValor();

    // Copiar los datos en la estructura contactoData
    strncpy(nuevo.tipo, tipo,50);
    strncpy(nuevo.valor, valor,50);

    // Escribir la estructura en el archivo
    archivo.write((char*)&nuevo, sizeof(contactoData));

    // Cerrar el archivo
    archivo.close();
}

void persona::mostrarContactosDesdeArchivo(const char* nombreArchivo) {
    std::ifstream archivo(nombreArchivo, ios::binary);

    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo para lectura." << std::endl;
        return;
    }

    cout << "Se esta leyendo el archivo..." << endl;
    contactoData contactoLeido;

    // Utilizamos el bucle while con la función good() para controlar el final del archivo
    while (archivo.read((char*)&contactoLeido, sizeof(contactoLeido))) {
        cout << "Tipo: " << contactoLeido.tipo << ", Valor: " << contactoLeido.valor << endl;
    }

    cout << "Ya se leyo el archivo..." << endl;
    archivo.close();
}



