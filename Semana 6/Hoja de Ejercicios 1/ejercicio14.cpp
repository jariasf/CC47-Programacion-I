#include <iostream>
using namespace std;

void mostrarDigitos(int numero) {
    int digito;
    while (numero > 0) {
        digito = numero % 10;
        cout << digito;
        //cout << "Digito: " << digito << endl;
        numero /= 10; //numero = numero / 10;
    }
    cout << endl;
}

int invertirNumero(int numero) {
    int invertido = 0, digito;
    while (numero > 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }
    return invertido;
}

int ingresarNumero() {
    int numero;
    do {
        cout << "Ingrese N: ";
        cin >> numero;
    } while (numero <= 0);
    return numero;
}

int main() {
    int numero = ingresarNumero();	
    //mostrarDigitos(numero);
    cout << "El numero invertido es: " << invertirNumero(numero) << endl;
    return 0;
}