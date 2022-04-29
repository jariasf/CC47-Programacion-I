#include <iostream>
using namespace std;

int ingresarNumero() {
    int numero;
    do {
        cout << "Ingrese un numero: ";
        cin >> numero;
    } while (numero < 1 || numero > 9);
    //} while (!(numero >= 1 && numero <= 9)); // condicion debe indicar los casos invalidos (verdadera para casos invalidos)
    return numero;
}

void imprimirTablaMultiplicar(int numero) {
    int contador = 1;
    while ( contador <= 10 ) {
        cout << numero << " x " << contador << " = " << numero * contador << endl;
        contador++;
    }
}

int main() {
    int numero = ingresarNumero();
    imprimirTablaMultiplicar(numero);
    return 0;
}