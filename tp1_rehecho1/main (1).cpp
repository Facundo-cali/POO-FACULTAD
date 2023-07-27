#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int** matrizAleatoria(int n, int m){
    int** matriz1 = new int*[n];
    srand(time(NULL));
    // Rellenar la matriz
    for (int i = 0; i < n; i++) {
        matriz1[i] = new int[m];
        for (int j = 0; j < m; j++) {
            matriz1[i][j] = rand()  % 501;
        }
    }
    return matriz1;
}
int** sumaMatrices(int** matriz1, int** matriz2, int n, int m){
    int** resultado = new int*[n];

    for (int i = 0; i < n; i++) {
       resultado[i] = new int[m];
       for (int j = 0; j < m; j++) {
           resultado[i][j] = matriz1[i][j] + matriz2[i][j];
       }
    }

    return resultado;
}
int** matrizNumero(int n, int m,int numero){
    int** matriz = new int*[n];
    // Rellenar la matriz
    for (int i = 0; i < n; i++) {
        matriz[i] = new int[m];
        for (int j = 0; j < m; j++) {
            matriz[i][j] = numero;
        }
    }
    return matriz;
}
int** rotacionMatriz(int** matriz, int n, int m){

    //se inicializa matriz rotada
    int** matrizRotada = new int*[m];
    for(int i = 0; i < m; i++){
        matrizRotada[i] = new int[n];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            matrizRotada[j][i] = matriz[i][j];
        }
    }

    return matrizRotada;
}
int** matrizDosNumeros(int n, int m, int num1, int num2){
    int** matriz = new int*[n];
    srand(time(NULL));
    // Rellenar la matriz
    for (int i = 0; i < n; i++) {
        matriz[i] = new int[m];
        for (int j = 0; j < m; j++) {
            int random = rand() % 2;
            if (random == 1) {
                matriz[i][j] = num1;
            }else {
                matriz[i][j] = num2;
            }
        }
    }
    return matriz;
}
int** matrizCeroACien(int n, int m){
    int** matriz = new int*[n];
    srand(time(NULL));
    int cont=0;
    for (int i = 0; i < n; i++) {
        matriz[i] = new int[m];
        for (int j = 0; j < m; j++) {
            if(cont == 100){
                cont = 0;
            }
            matriz[i][j] = cont;
            cont++;
        }
    }
    return matriz;
}

void ejercicio6(int** matriz,int n,int m){
    if (n != m) {
        cout<< "Se ingreso una matriz no cuadrada por lo cual no se mostrara la suma de los numeros de la diagonal principal"<<endl;
    }
    int sumaTotal = 0;
    int sumaPares = 0;
    int sumaImpares = 0;
    int sumaDiagonalPrincipal = 0;
    int* sumaColumna = new int[m];
    int* sumaFila = new int[n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            sumaTotal += matriz[i][j];
            if (i == j && n == m) {
                sumaDiagonalPrincipal += matriz[i][j];
            }
            if (matriz[i][j] % 2 == 0) {
                sumaPares+= matriz[i][j];
            }else {
                sumaImpares+= matriz[i][j];
            }
            sumaColumna[j] += matriz[i][j];
            sumaFila[i] += matriz[i][j];
        }

    }
    cout<<"Suma total de los numeros almacenados en la matriz: "<< sumaTotal <<endl;
    cout<<"Suma total de los numeros pares almacenados en la matriz: "<< sumaPares<<endl;
    cout<<"Suma total de los numeros impares almacenados en la matriz: "<< sumaImpares<<endl;
    for (int i = 0; i < m; ++i) {
        cout<<"Suma total columna "<< i + 1 << " : "<< sumaColumna[i]<<endl;
    }
    for (int i = 0; i < n; ++i) {
        cout<<"Suma total fila "<< i + 1 << " : "<< sumaFila[i]<<endl;
    }
    cout<<"Suma total de los numeros de la diagonal principal: "<< sumaDiagonalPrincipal<<endl;

    delete[] sumaColumna;
    delete[] sumaFila;
}

void matrizSubyacentes(int** matriz, int n, int m, int fila, int col, int num){
//    si la posicion ingresada se encuentra en la matriz o no.
    if(fila <= n && col <= m){
        // Cambiar el valor de la posición ingresada
        matriz[fila][col] = num;
        if(fila > 0) {
           matriz[fila-1][col] = num;
        }
        if(fila < n-1) {
           matriz[fila+1][col] = num;
        }
        if(col > 0) {
           matriz[fila][col-1] = num;
        }
        if(col < m-1) {
           matriz[fila][col+1] = num;
        }

        cout<<"Matriz base despues de usar la funcion (ejercicio 7): "<<endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << matriz[i][j] << " ";
            }
            cout << endl;
        }
    }else{
        cout<<"La posicion ingresada no se encuentra en la matriz."<<endl;
    }
}

bool posibleCargar(int** matriz, int n, int m,int fila,int columna, int valor) {
    // Generar posición aleatoria
    srand(time(NULL));

    // Verificar posicion.
    if (matriz[fila][columna] == 0) {
        int adyacentesLibres = 0;
        if (fila > 0 && matriz[fila - 1][columna] == 0) {
            adyacentesLibres++;
        }
        if (fila < n - 1 && matriz[fila + 1][columna] == 0) {
            adyacentesLibres++;
        }
        if (columna > 0 && matriz[fila][columna - 1] == 0) {
            adyacentesLibres++;
        }
        if (columna < m - 1 && matriz[fila][columna + 1] == 0) {
            adyacentesLibres++;
        }
        if (adyacentesLibres >= 2) {
            matriz[fila][columna] = valor;
            return true;
        }
    }

    return false;
}

int main() {
    int n = 3;
    int m = 4;
    //--------------------------------EJERCICIO 1--------------------------------------------:
    int** miMatriz = matrizAleatoria(n, m);
    // Mostrar los valores de la matriz

    cout<<"Matriz conseguida (ejericio 1): "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << miMatriz[i][j] << " ";
        }
        cout << endl;
    }

    //--------------------------------EJERCICIO 2--------------------------------------------:
    int** matrizUno = matrizAleatoria(n, m);
    int** matrizDos = matrizAleatoria(n, m);
    int** resultado = sumaMatrices(matrizUno, matrizDos, n, m);
    // Imprimir la matriz resultado
    cout<<"Matriz resultante de sumar 2 matrices aleatorias (ejercicio 2): "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    //--------------------------------EJERCICIO 3--------------------------------------------:
    int** matrizNum = matrizNumero(n, m, 4);
    cout<<"Matriz con solo un numero pasado por parametro (ejercicio 3): "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrizNum[i][j] << " ";
        }
        cout << endl;
    }

    //--------------------------------EJERCICIO 4--------------------------------------------:
    int** matrizSinRotar = matrizAleatoria(n, m);
    cout<<"Muestra matriz sin rotar (ejercicio 4): "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrizSinRotar[i][j] << " ";
        }
        cout << endl;
    }

    int** matrizRotada = rotacionMatriz(matrizSinRotar, n, m);

    cout<<"Muestra matriz rotada (ejercicio 4): "<<endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrizRotada[i][j] << " ";
        }
        cout << endl;
    }

    //--------------------------------EJERCICIO 5--------------------------------------------:
    int** matrizDosNum = matrizDosNumeros(n, m,5,3); //le paso n , m y los 2 numeros que tendrá la matriz.
    // Mostrar los valores de la matriz
    cout<<"Matriz conseguida (ejercicio 5): "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrizDosNum[i][j] << " ";
        }
        cout << endl;
    }

    //--------------------------------EJERCICIO 6--------------------------------------------:
    int** matrizCeroCien = matrizCeroACien(4, 4); //creo la matriz con valores del 0 al 100 con 4 filas y 4 columnas.

    // Mostrar los valores de la matriz
    cout<<"Matriz conseguida (ejericio 6): "<<endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrizCeroCien[i][j] << " ";
        }
        cout << endl;
    }

    ejercicio6(matrizCeroCien, 4, 4);

    //---------------------------------------EJERCICIO 7---------------------------------------------------:
    int** matrizUnosYCeros = matrizDosNumeros(3, 4, 1, 0); //creo la matriz
    // Mostrar los valores base de la matriz
    cout<<"Matriz base antes de usar la funcion (ejercicio 7): "<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrizUnosYCeros[i][j] << " ";
        }
        cout << endl;
    }

    // Uso la funcion para cambiar la matriz
    matrizSubyacentes(matrizUnosYCeros, 3, 4, 1,2,0);//valor a colocar (...,1,1,1) = (fila, columna, numero que quiero poner)//pondra un 0 en la posicion fila1 y columna2, y tambien en sus adyacentes



    cout<<"Ejercicio 8:";
    //------------------------------------------EJERCICIO 8-------------------------------------------------:
    int** matrizUnosYCerosEj8 = matrizDosNumeros(3, 4, 1, 0); //creo la matriz
    // Mostrar los valores base de la matriz
    cout<<"Matriz base antes de usar la funcion (ejercicio 8): "<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrizUnosYCerosEj8[i][j] << " ";
        }
        cout << endl;
    }
    //Posicion aleatoria que sera analizada
    int fila = rand() % n;
    int columna = rand() % m;

    // Verificar si es posible cargar un valor
    if (posibleCargar(matrizUnosYCerosEj8, 3, 4, fila, columna, 0)) {//(...,fila,columna,0) = (...,fila aleatoria creada,columna aleatoria creada, valor)
        cout << "Es posible cargar el valor " << "0" << " en la posicion fila: "<< fila << " columna: "<< columna << endl;
    } else {
        cout << "No es posible cargar el valor" << " en la posicion fila: "<< fila << " columna: "<< columna << endl;
    }

    // Libero memoria
    for (int i = 0; i < n; i++) {
        delete[] matrizDosNum[i];
        delete[] matrizNum[i];
        delete[] matrizUno[i];
        delete[] matrizDos[i];
        delete[] resultado[i];
        delete[] miMatriz[i];
        delete[] matrizRotada[i];
    }

    delete[] matrizDosNum;
    delete[] matrizUno;
    delete[] matrizDos;
    delete[] resultado;
    delete[] miMatriz;
    delete[] matrizNum;
    delete[] matrizRotada;

    return 0;
}

