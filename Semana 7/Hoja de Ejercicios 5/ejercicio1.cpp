#include <iostream>
using namespace std;

void imprimirTriangulo(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int ingresarNumero() {
    int n;
    do {
        cout << "Ingrese un numero: ";
        cin >> n;
    } while (n >= 10);
    return n;
}

int main() {
    int n = ingresarNumero();
    imprimirTriangulo(n);
    return 0;
}