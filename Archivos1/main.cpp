#include <iostream>
#include <fstream>
#include <string>

//1. Realice un procedimiento que tome un archivo de texto y lo corte en n archivos de texto (donde n debe ser pasado por parámetros) Por ejemplo dado un archivo de 6 líneas y un n=2, el procedimiento debe retornar 2 archivos, el primero con las 3 primeras líneas y el otro con las restantes.
// "F:\POO FACULTAD\Archivos1\archivo1.txt"


using namespace std;

int main()
{
    string archivo1 = "F:/POO FACULTAD/Archivos1/archivo1.txt";
    ifstream archivoEntrada(archivo1);
    int n;
    int contador = 0;

    cout<<"Ïngresar cantidad de archivos de texto que se quieren generar: "<<endl;
    cin>>n;

    if (!archivoEntrada) {
        cerr << "No se pudo abrir el archivo." << endl;
        return -1;
    }

    string linea;
    while (getline(archivoEntrada, linea)) {
        contador++;
    }

    archivoEntrada.close();  // Cerrar el archivo
    cout<<contador;
    int cantDeLineas = (contador / n);
    // Rastrear la posición de lectura actual
    streampos posicionActual = 0;

    for (int i = 0; i < n; ++i) {
        int cont = 0;
        // Genera el nombre del archivo con el valor de i
        string nombreArchivo = "nuevo_archivo_" + to_string(i) + ".txt";

        // Crea un objeto ofstream para escribir en el nuevo archivo
        ofstream archivoSalida(nombreArchivo);

        // Volver a abrir el archivo1
        ifstream archivoEntrada(archivo1);
        archivoEntrada.seekg(posicionActual);

        while (getline(archivoEntrada, linea)) {
            if(cont < cantDeLineas){
                archivoSalida << "Linea: " << linea << endl;
                cont++;
                // Actualizar la posición de lectura para el próximo ciclo
                posicionActual = archivoEntrada.tellg();
            }

        }

        archivoSalida.close();
        archivoEntrada.close();  // Cerrar el archivo
    }

    return 0;
}
