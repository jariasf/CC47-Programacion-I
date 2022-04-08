#include <iostream>
using namespace std;

int main() {
    //int numero;      // [-2^31, 2^31 - 1]
    long long numero;  // [-2^63, 2^63 - 1]
    int numero1, numero2, numero3, suma;

    cout << "Ingrese numero de 15 digitos: ";
    cin >> numero; //123456789123456

    numero1 = numero % 100000; // 23456
    numero = numero / 100000;  // 1234567891

    numero2 = numero % 100000; // 67891
    numero3 = numero / 100000; // 12345

    suma = numero1 + numero2 + numero3;

    cout << "Números: " << numero3 << "+" << numero2 << "+" << numero1 << "=" << suma << endl;

    return 0;
}