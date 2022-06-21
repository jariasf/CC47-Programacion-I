#include <iostream>
using namespace std;

void mostrarValores(int *arreglo, int n) {
    for (int i = 0; i < n; ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

void repasoArreglos() {
    // Declaracion de arreglo de tamanio n
    int n = 3;
    int* arreglo = new int[n]; // [1,2,3,4,5,6,7,8,9,10]
    // Asignación
    arreglo[0] = 12;
    arreglo[1] = 15;
    arreglo[2] = -12;
    // Mostramos valores
    mostrarValores(arreglo, n);
    // Liberar memoria
    delete[]arreglo;
}

void matriz1() {
    int num_filas = 2, num_columnas = 3;
    // Declaración de matriz
    int** matriz = new int* [num_filas];
    // Asignación en memoria
    matriz[0] = new int[num_columnas];
    matriz[1] = new int[num_columnas];
   
    // Inicializar
    matriz[0][0] = 12;
    matriz[0][1] = 45;
    matriz[0][2] = 55;

    matriz[1][0] = -12;
    matriz[1][1] = 45;
    matriz[1][2] = -127;

    // Operaciones

    // Liberar la memoria
    delete[]matriz[0];
    delete[]matriz[1];
    delete[]matriz;
}

int main() {
	
    int num_filas = 2, num_columnas = 3;
    // Declaración de matriz
    int** matriz = new int*[num_filas];

    // Asignación en memoria
    for (int i = 0; i < num_filas; ++i)
        matriz[i] = new int[num_columnas];

    // Inicializacion de forma manual
    matriz[0][0] = 12;
    matriz[0][1] = 45;
    matriz[0][2] = 55;

    matriz[1][0] = -12;
    matriz[1][1] = 45;
    matriz[1][2] = -127;

    // Inicializacion mediante consola
    for (int i = 0; i < num_filas; ++i) {
        for (int j = 0; j < num_columnas; ++j) {
            cout << "Ingrese el valor de la fila " << i << " y columna " << j << ": ";
            cin >> matriz[i][j];
        }
    }

    // Operaciones
    // Mostrar valores de matriz
    cout << "\nImpresion de matriz por filas" << endl;
    for (int i = 0; i < num_filas; ++i) {
        for (int j = 0; j < num_columnas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nImpresion de matriz por columnas" << endl;
    for (int j = 0; j < num_columnas; ++j) {
        for (int i = 0; i < num_filas; ++i) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Liberar la memoria
    for (int i = 0; i < num_filas; ++i)
        delete[] matriz[i];
    delete[] matriz;

    return 0;
}