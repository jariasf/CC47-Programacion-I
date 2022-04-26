#include <iostream>
using namespace std;

bool esImpar(int n) {
    return n % 2 != 0;
}

int calcularSumaDeImpares(int n) {
    int suma = 0;
    // contador = 1, 2, 3, 4, 5, 6, .... n
    int contador = 1;
    while (contador <= n) {
        if ( esImpar(contador) ) {
            suma = suma + contador;
        }
        contador++;
    }
    // suma = 1 + 3 + 5 + 7 + 9 + 11 ... + _ <= n
    return suma;
}

int calcularSumaDeImpares2(int n) {
    int suma = 0;
    // contador = 1, 3, 5, 7, .... n
    int contador = 1;
    while (contador <= n) {
        /*
        suma = 0
        suma = 0 + 1 = 1
        suma = 1 + 2 = 3
        suma = 3 + 3 = 6
        suma = 6 + 4 = 10
        suma = 10 + 5 = 15
        */
        suma = suma + contador;
        contador = contador + 2;
    }
    // suma = 1 + 3 + 5 + 7 + 9 + 11 ... + _ <= n
    return suma;
}



int main() {
    int n;
    cout << "Ingrese N: ";
    cin >> n;
    cout << "La suma es: " << calcularSumaDeImpares2(n)<<endl;
    return 0;
}