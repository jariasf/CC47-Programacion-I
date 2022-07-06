#include <iostream>
using namespace std;

char tipos_quinua[3] = {'R', 'N', 'B'};

int nextInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

char generarTipoQuinua() {
    return tipos_quinua[nextInt(0, 2)];
}

void generaYMuestraMatriz(char** matriz, int num_filas, int num_columnas) {
    for (int i = 0; i < num_filas; ++i) {
        for (int j = 0; j < num_columnas; ++j) {
            matriz[i][j] = generarTipoQuinua();
        }
    }

    cout << "Matriz de quinuas" << endl;
    for (int i = 0; i < num_filas; ++i) {
        for (int j = 0; j < num_columnas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void imprimirMayorQuinua(int rojo, int negro, int blanco) {
    cout << "\nTipo de quinua con mayor frecuencia: " << endl;
    if (rojo >= negro && rojo >= blanco)
        cout << "Roja" << endl;
    if (negro >= rojo && negro >= blanco)
        cout << "Negra" << endl;
    if (blanco >= rojo && blanco >= negro)
        cout << "Blanca" << endl;
}

void imprimirMenorQuinua(int rojo, int negro, int blanco) {
    cout << "\nTipo de quinua con menor frecuencia: " << endl;
    if (rojo <= negro && rojo <= blanco)
        cout << "Roja" << endl;
    if (negro <= rojo && negro <= blanco)
        cout << "Negra" << endl;
    if (blanco <= rojo && blanco <= negro)
        cout << "Blanca" << endl;
}

void frecuenciaQuinuaMayorMenor(char** matriz, int num_filas, int num_columnas) {
    int rojo, negro, blanco;
    rojo = negro = blanco = 0;

    for (int i = 0; i < num_filas; ++i) {
        for (int j = 0; j < num_filas; ++j) {
            if (matriz[i][j] == 'R')
                rojo++;
            else if (matriz[i][j] == 'N')
                negro++;
            else
                blanco++;
        }
    }

    imprimirMayorQuinua(rojo, negro, blanco);
    imprimirMenorQuinua(rojo, negro, blanco);
}


bool esPosicionValida(int i, int j, int num_filas, int num_columnas) {
    if (i >= 0 && j >= 0 && i < num_filas && j < num_columnas)
        return true;
    return false;
}

bool esQuinuaEspecial(char** matriz, int i, int j, int num_filas, int num_columnas) {
    // Parte superior
    if (!esPosicionValida(i - 1, j, num_filas, num_columnas) || matriz[i - 1][j] != 'R')
        return false;

    // Diagonal superior derecha
    if (!esPosicionValida(i - 1, j + 1, num_filas, num_columnas) || matriz[i - 1][j + 1] != 'B')
        return false;

    // Izquierda
    if (!esPosicionValida(i, j - 1, num_filas, num_columnas) || matriz[i][j - 1] != 'B')
        return false;

    // Derecha
    if (!esPosicionValida(i, j + 1, num_filas, num_columnas) || matriz[i][j + 1] != 'N')
        return false;

    // Diagonal inferior izquierda
    if (!esPosicionValida(i + 1, j - 1, num_filas, num_columnas) || matriz[i + 1][j - 1] != 'N')
        return false;

    // Abajo
    if (!esPosicionValida(i + 1, j, num_filas, num_columnas) || matriz[i + 1][j] != 'R')
        return false;

    return true;
}

bool esQuinuaEspecial(char** matriz, int i, int j) {

    // Parte superior
    if ( matriz[i - 1][j] != 'R')
        return false;

    // Diagonal superior derecha
    if (matriz[i - 1][j + 1] != 'B')
        return false;

    // Izquierda
    if (matriz[i][j - 1] != 'B')
        return false;

    // Derecha
    if (matriz[i][j + 1] != 'N')
        return false;

    // Diagonal inferior izquierda
    if (matriz[i + 1][j - 1] != 'N')
        return false;

    // Abajo
    if (matriz[i + 1][j] != 'R')
        return false;

    return true;
}

void quinuaEspecial(char** matriz, int num_filas, int num_columnas) {
    cout << "\nLos puntos donde puede existir una planta de Quinua Especial:" << endl;
    int contador = 0;
    for (int i = 1; i < num_filas - 1; ++i) {
        for (int j = 1; j < num_columnas - 1; ++j) {
            if (esQuinuaEspecial(matriz, i, j, num_filas, num_columnas)) {
                cout << "Fila: " << i << ", Columna: " << j << endl;
                contador++;
            }
        }
    }
    cout << "\nTotal de apariciones: " << contador << endl;
}

int main() {
    srand(time(NULL));
    int num_filas = 10, num_columnas = 15;
    char** matriz = new char* [num_filas];
    for (int i = 0; i < num_filas; ++i) {
        matriz[i] = new char[num_columnas];
    }

    // Una función genera_y_muestra_matriz, que teniendo como parámetro una matriz de 10 x 15, 
    // complete la matriz de forma aleatoria con tres tipos de Quinua(roja, negra y blanca)
    generaYMuestraMatriz(matriz, num_filas, num_columnas);

    // Una función frecuencia_quinua_mayor_menor, que determine y muestre los tipos de
    // quinua que tienen la mayor y menor frecuencia de aparición.
    frecuenciaQuinuaMayorMenor(matriz, num_filas, num_columnas);

    // Una función quinua_especial, que determine y muestre los puntos(fila, columna), donde
    // pueda existir una planta de Quinua Especial y la cantidad total de apariciones.
    quinuaEspecial(matriz, num_filas, num_columnas);

    for (int i = 0; i < num_filas; ++i) {
        delete[]matriz[i];
    }
    delete[]matriz;

    return 0;
}