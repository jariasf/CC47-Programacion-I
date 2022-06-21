#include <iostream>
using namespace std;

void generarValores(int **matriz, int num_filas, int num_columnas) {
    for (int i = 0; i < num_filas; ++i) {
        for (int j = 0; j < num_columnas; ++j) {
            matriz[i][j] = rand() % 101;
        }
    }
}

void mostrarValores(int **matriz, int num_filas, int num_columnas) {
    cout << "Valores de la matriz" << endl;
    for (int i = 0; i < num_filas; ++i) {
        for (int j = 0; j < num_columnas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    srand(time(NULL));

    int num_filas, num_columnas;
    // Ingreso de dimensiones
    do {
        cout << "Ingrese el numero de filas: ";
        cin >> num_filas;
    } while (num_filas <= 0);

    do {
        cout << "Ingrese el numero de columnas: ";
        cin >> num_columnas;
    } while (num_columnas <= 0);

    // Declaración de matriz
    int** matriz = new int* [num_filas];
    for (int i = 0; i < num_filas; ++i) {
        matriz[i] = new int[num_columnas];
    }

    // Métodos
    generarValores(matriz, num_filas, num_columnas);
    mostrarValores(matriz, num_filas, num_columnas);

    // Liberar de memoria
    for (int i = 0; i < num_filas; ++i)
        delete[]matriz[i];
    delete[]matriz;
    return 0;
}