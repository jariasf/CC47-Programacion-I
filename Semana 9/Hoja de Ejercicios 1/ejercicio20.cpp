#include <iostream>
using namespace std;

//Implementar una función que determine si un número es primo o no
// numero=13, divisores = 1, 13 
// numero=7,  divisores = 1, 7
// numero=10, divisores = 1, 10, 2, 5

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

int main() {
    int numero;
    do {
        cout << "Ingrese numero: ";
        cin >> numero;
    } while (numero <= 0);

    if (esPrimo(numero)) {
        cout << "El numero " << numero << " es primo" << endl;
    }
    else {
        cout << "El numero " << numero << " no es primo" << endl;
    }
    return 0;
}
