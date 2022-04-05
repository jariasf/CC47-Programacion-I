#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int numero, doble, triple;

    // Entrada
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    // Proceso
    doble = numero * 2;
    triple = numero * 3;

    // Salida
    cout << "El valor es: " << numero << endl;
    cout << "El doble es: " << doble << endl;
    cout << "El triple es: " << triple << endl;

	return 0;
}
