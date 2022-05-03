#include <iostream>
using namespace std;

int ingresarNumero() {
    int n;
    do {
        cout << "Ingrese un numero: ";
        cin >> n;
    } while (n < 0);
    return n;
}

int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 1; i <= exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}

int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

double sumatoria(int n) {
    double suma = 0;
    for (int i = 1; i <= n; ++i) {
        suma = suma + potencia(i, i + 1)/(double)factorial(i);
    }
    return suma;
}

int main() {
    int n = ingresarNumero();
    cout << "La sumatoria de los " << n << " primeros terminos es " << sumatoria(n) << endl;
    return 0;
}