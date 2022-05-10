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

void imprimirTriangulo(int n, char c) {
    for (int limite = n; limite >= 1; limite--) {
        // Impresion de cada fila
        for (int j = 1; j <= limite; ++j) {
            cout << c;
        }
        cout << endl;
    }
}

int main() {
    int n = ingresarNumero();
    char c;
    cout << "Ingrese un caracter: ";
    cin >> c;
    imprimirTriangulo(n, c);
    return 0;
}