#include <iostream>
using namespace std;

int ingresarNumero() {
    int numero;
    do {
        cout << "Ingrese un numero: ";
        cin >> numero;
    } while ( numero <= 0 );
    return numero;
}

bool esPerfecto(int numero) {
    int contador = 1, suma_divisores = 0;
    while (contador < numero) {
        if (numero % contador == 0) {
            // contador es un divisor
            suma_divisores = suma_divisores + contador;
        }
        contador++;
    }

    if (suma_divisores == numero) {
        return true;
    }
    return false;
}

int main() {
    int numero = ingresarNumero();
    if (esPerfecto(numero)) {
        cout << "Es perfecto" << endl;
    }
    else {
        cout << "No es perfecto" << endl;
    }
    return 0;
}