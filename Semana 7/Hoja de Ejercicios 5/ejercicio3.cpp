#include <iostream>
using namespace std;

int ingresarNumero() {
    int n;
    do {
        cout << "Ingrese un numero: ";
        cin >> n;
    } while (n >= 10 || n <= 0);
    return n;
}

void imprimirCuadradoCompleto(int n) {
    for (int fila = 1; fila <= n; ++fila) {
        for (int columna = 1; columna <= n; ++columna) {
            cout << "*";
        }
        cout << endl;
    }
}

void imprimirEspaciosEnBlanco(int num_espacios) {
    for (int i = 1; i <= num_espacios; ++i) {
        cout << " ";
    }
}


void imprimirCuadradoIncompleto(int n) {
    int num_espacios = 40 - n / 2;

    for (int fila = 1; fila <= n; ++fila) {
        // En cada fila ejecutamos las siguientes instrucciones

        // Imprimir espacios en blanco
        imprimirEspaciosEnBlanco(num_espacios);

        // Imprimir figura fila por fila
        for (int columna = 1; columna <= n; ++columna) {
            if (fila == 1 || fila == n || columna == 1 || columna == n) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n = ingresarNumero();
    imprimirCuadradoIncompleto(n);
    return 0;
}