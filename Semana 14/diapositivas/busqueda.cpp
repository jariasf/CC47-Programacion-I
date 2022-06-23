#include <iostream>
using namespace std;

void generarValores(int** matriz, int num_filas, int num_columnas) {
    for (int i = 0; i < num_filas; ++i) {
        for (int j = 0; j < num_columnas; ++j) {
            matriz[i][j] = rand() % 101;
        }
    }
}

void mostrarValores(int** matriz, int num_filas, int num_columnas) {
    cout << "Valores de la matriz" << endl;
    for (int i = 0; i < num_filas; ++i) {
        for (int j = 0; j < num_columnas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void buscarValorEnMatriz(int **matriz, int num_filas, int num_columnas, int valor) {

    int posc, posf;
    posc = -1; 
    posf = -1;
    bool encontrado = false;

    for (int i = 0; i < num_filas && !encontrado ; ++i) {
        for (int j = 0; j < num_columnas && !encontrado; ++j) {
            if (matriz[i][j] == valor) {
                posf = i;
                posc = j;
                encontrado = true;
            }
        }
    }

    if (posf != -1) {
        cout << "El dato se encuentra en la fila " << posf << " y columna " << posc << endl;
    }
    else {
        cout << "El dato no se encuentra en la matriz" << endl;
    }

}

void encontrarMayorEnMatriz(int **matriz, int num_filas, int num_columnas) {

    int mayor_valor = matriz[0][0];
    int posf = 0, posc = 0;

    for (int i = 0; i < num_filas; ++i) {
        for (int j = 0; j < num_columnas; ++j) {
            if (matriz[i][j] > mayor_valor) {
                mayor_valor = matriz[i][j];
                posf = i;
                posc = j;
            }
        }
    }

    cout << "El mayor valor es " << mayor_valor << endl;
    cout << "El mayor se encuentra en la fila " << posf << " y  columna " << posc << endl;
}


struct Coord {
    int x, y;
};

Coord posicionDeMayorEnMatriz(int ** matriz, int num_filas, int num_columnas) {
    int mayor_valor = matriz[0][0];
    int posf = 0, posc = 0;

    for (int i = 0; i < num_filas; ++i) {
        for (int j = 0; j < num_columnas; ++j) {
            if (matriz[i][j] > mayor_valor) {
                mayor_valor = matriz[i][j];
                posf = i;
                posc = j;
            }
        }
    }

    Coord c;
    c.x = posf;
    c.y = posc;
    return c;
}

int main() {
    srand(time(NULL));

    int num_filas, num_columnas, valor;
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

    cout << "\nIngrese un valor a buscar: ";
    cin >> valor;
    buscarValorEnMatriz(matriz, num_filas, num_columnas, valor);
    encontrarMayorEnMatriz(matriz, num_filas, num_columnas);

    Coord c = posicionDeMayorEnMatriz(matriz, num_filas, num_columnas);
    cout << "La posicion del mayor es " << c.x << "," << c.y << endl;

    // Liberar de memoria
    for (int i = 0; i < num_filas; ++i)
        delete[]matriz[i];
    delete[]matriz;
    return 0;
}