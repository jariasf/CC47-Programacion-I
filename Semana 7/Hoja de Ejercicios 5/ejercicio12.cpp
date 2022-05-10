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

void imprimirTriangulo(int n) {
    for (int i = 1; i <= n; ++i) {
        int limite = 2 * i - 1;
        for (int j = 1; j <= limite; ++j) {
            cout << j;
        }
        cout << endl;
    }
}

void imprimirEspaciosEnBlanco(int num_espacios) {
    for (int i = 1; i <= num_espacios; ++i) {
        cout << " ";
    }
}

void imprimirTrianguloConEspacios(int n) {
    for (int i = 1; i <= n; ++i) {
        imprimirEspaciosEnBlanco(n - i);
        int limite = 2 * i - 1;
        for (int j = 1; j <= limite; ++j) {
            cout << j;
        }
        cout << endl;
    }
}

void imprimirRombo(int n) {
    int num_espacios = 40 - n;
    // Imprimir triangulo superior
    for (int i = 1; i <= n; ++i) {
        // Espacios para centrar
        imprimirEspaciosEnBlanco(num_espacios);

        // Muestra la figura
        imprimirEspaciosEnBlanco(n - i);
        int limite = 2 * i - 1;
        for (int j = 1; j <= limite; ++j) {
            cout << (char)('A' + j - 1);
        }
        cout << endl;
    }

    // Imprimir triangulo inferior
    for (int i = n - 1; i >= 1; --i) {
        // Espacios para centrar
        imprimirEspaciosEnBlanco(num_espacios);

        // Muestra la figura
        imprimirEspaciosEnBlanco(n - i);
        int limite = 2 * i - 1;
        for (int j = 1; j <= limite; ++j) {
            cout << (char)('A' + j - 1);
        }
        cout << endl;
    }
}

int main() {
    int n = ingresarNumero();
    imprimirRombo(n);
    return 0;
}