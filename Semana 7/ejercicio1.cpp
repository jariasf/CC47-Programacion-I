#include <iostream>
using namespace std;

int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 1; i <= exponente; ++i) {
        //resultado = resultado * base;  // 1= base, 2=base*base, 3= base*base*base
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base, exponente;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;
    cout << "El resultado de elever " << base << " al " << exponente << " es " << potencia(base, exponente) << endl;
    return 0;
}