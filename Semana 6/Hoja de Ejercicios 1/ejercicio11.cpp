#include <iostream>
using namespace std;

int ingresarNumero() {
    int numero;
    do {
        cout << "Ingrese N: ";
        cin >> numero;
    } while (numero <= 0);
    return numero;
}

double calcularSuma(int n) {
    double suma = 0.;
    int denominador = 1;
    for (int i = 1; i <= n; ++i) {
        suma += 1.0 / denominador;
        denominador = denominador * 2;
    }
    return suma;
}

int main() {
    int n = ingresarNumero();
    cout << "La suma es " << calcularSuma(n)<<endl;
    return 0;
}