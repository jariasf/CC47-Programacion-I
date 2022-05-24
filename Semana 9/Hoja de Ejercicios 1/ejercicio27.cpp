#include <iostream>
using namespace std;

//Implementar un programa que muestre en pantalla los 20 primeros números primos.
bool esDivisible(int n, int d) {
    return (n % d == 0);
}

bool esPrimo(int numero) {
    if (numero == 1)
        return false;

    for (int i = 2; i < numero; ++i) {
        if (esDivisible(numero, i)) {
            return false;
        }
    }
    return true;
}

/*
N = 20
i = 2, 3, 4, 5, 6, 7, ..., 20, 21, 23, 24, 25, 26, 27, ...
cnt_primos = 4
*/
void imprimirPrimerosNPrimos(int num_primos) {
    for (int i = 2, cnt_primos = 0; cnt_primos < num_primos ; ++i) {
        if (esPrimo(i)) {
            cout << i << " ";
            cnt_primos++;
        }
    }
}

int main() {
    int n;
    cout << "Ingrese el numero de primos: ";
    cin >> n;
    imprimirPrimerosNPrimos(n);
    return 0;
}