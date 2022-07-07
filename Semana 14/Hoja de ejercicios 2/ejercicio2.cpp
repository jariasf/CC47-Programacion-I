#include <iostream>
using namespace std;

int nextInt(int min , int max) {
    return min + rand() % (max - min + 1);
}

void generarValores(int** matriz, int num_filas, int num_columnas) {
    for (int i = 0; i < num_filas; ++i) {
        for (int j = 0; j < num_columnas; ++j) {
            matriz[i][j] = nextInt(1, 3);
        }
    }

    for (int i = 0; i < num_filas; ++i) {
        for (int j = 0 ; j < num_columnas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void mayorCultivo(int tipo1, int tipo2 , int tipo3) {
    cout << "\nCultivos de mayor frecuencia" << endl;
    if (tipo1 >= tipo2 && tipo1 >= tipo3)
        cout << "Zanahoria" << endl;
    if (tipo2 >= tipo1 && tipo2 >= tipo3)
        cout << "Berenjena" << endl;
    if (tipo3 >= tipo1 && tipo3 >= tipo2)
        cout << "Nabos" << endl;
}

void menorCultivo(int tipo1, int tipo2, int tipo3) {
    cout << "\nCultivos de menor frecuencia" << endl;
    if (tipo1 <= tipo2 && tipo1 <= tipo3)
        cout << "Zanahoria" << endl;
    if (tipo2 <= tipo1 && tipo2 <= tipo3)
        cout << "Berenjena" << endl;
    if (tipo3 <= tipo1 && tipo3 <= tipo2)
        cout << "Nabos" << endl;
}

void mayorMenorCultivo(int** matriz, int num_filas, int num_columnas) {
    int tipo1 = 0, tipo2 = 0, tipo3 = 0;
    for (int i = 0; i < num_filas; ++i) {
        for (int j = 0; j < num_columnas; ++j) {
            if (matriz[i][j] == 1) tipo1++;
            else if (matriz[i][j] == 2)tipo2++;
            else tipo3++;
        }
    }
    
    mayorCultivo(tipo1, tipo2, tipo3);
    menorCultivo(tipo1, tipo2, tipo3);
}

bool esGuaridaDeTopos(int i, int j, int **matriz, int num_filas, int num_columnas) {

    // Arriba
    if (i - 1 >= 0 && matriz[i - 1][j] != 3)
        return false;

    // Izquierdo
    if (j - 1 >= 0 && matriz[i][j - 1] != 2)
        return false;

    // Derecho
    if (j + 1 < num_columnas && matriz[i][j + 1] != 2)
        return false;

    // Abajo
    if (i + 1 < num_filas && matriz[i + 1][j] != 1)
        return false;

    // Diagonial superior derecha
    //if (i - 1 >= 0 && j + 1 < num_columnas && matriz[i - 1][j + 1] != 3)
    //    return false;

    return true;
}

void determinarGuaridaTopos(int**matriz, int num_filas, int num_columnas) {
    cout << "\nGuaridas de Topos" << endl;
    int guaridas = 0;
    for (int i = 0; i < num_filas; ++i) {
        for (int j = 0; j < num_columnas; ++j) {
            if (esGuaridaDeTopos(i, j, matriz, num_filas, num_columnas)) {
                cout << "Fila: " << i << " Columna: " << j << endl;
                guaridas++;
            }
        }
    }
    cout << "El total de guaridas de topos es " << guaridas << endl;
}


bool esGuaridaDeTopos2(int i, int j, int** matriz) {
    // Arriba
    if (matriz[i - 1][j] != 3)
        return false;

    // Izquierdo
    if (matriz[i][j - 1] != 2)
        return false;

    // Derecho
    if (matriz[i][j + 1] != 2)
        return false;

    // Abajo
    if (matriz[i + 1][j] != 1)
        return false;

    // Diagonial superior derecha
    //if (matriz[i - 1][j + 1] != 3)
    //    return false;
    return true;
}

void determinarGuaridaTopos2(int** matriz, int num_filas, int num_columnas) {
    cout << "\nGuaridas de Topos" << endl;
    int guaridas = 0;
    for (int i = 1; i < num_filas - 1; ++i) {
        for (int j = 1; j < num_columnas - 1; ++j) {
            if (esGuaridaDeTopos2(i, j, matriz)) {
                cout << "Fila: " << i << " Columna: " << j << endl;
                guaridas++;
            }
        }
    }
    cout << "El total de guaridas de topos es " << guaridas << endl;
}

int main() {
    srand(time(NULL));
    int num_filas = 10, num_columnas = 15;
    int** matriz;
    matriz = new int* [num_filas];
    for (int i = 0; i < num_filas; ++i) {
        matriz[i] = new int[num_columnas];
    }
    // Generar una matriz de 10 x 15, donde contenga de forma aleatoria los tres tipos de cultivos.
    generarValores(matriz, num_filas, num_columnas);

    // Determinar que cultivo tiene la mayor y menor frecuencia.
    mayorMenorCultivo(matriz, num_filas, num_columnas);

    // Determinar los puntos(fila, columna), donde pueda existir una guarida de topo.
    determinarGuaridaTopos2(matriz, num_filas, num_columnas);
   
    for (int i = 0; i < num_filas; ++i) {
        delete[]matriz[i];
    }
    delete[]matriz;

    return 0;
}