#include <iostream>
using namespace std;

bool esImpar(short digito) {
    bool es_impar = (digito % 2 != 0);
    return es_impar;
}

short sumaDigitosImpares(short numero) {
    short suma, d1, d2, d3, d4;
    bool d1_impar, d2_impar, d3_impar, d4_impar;

    // Obtener digitos del numero (ejemplo: 3591)
    d4 = numero % 10; // 1
    numero /= 10;     // 359
    d3 = numero % 10; // 9
    numero /= 10;     // 35
    d2 = numero % 10; // 5
    d1 = numero / 10; // 3

    /*
    d4_impar = (d4 % 2 != 0);
    d3_impar = (d3 % 2 != 0);
    d2_impar = (d2 % 2 != 0);
    d1_impar = (d1 % 2 != 0);
    */

    d4_impar = esImpar(d4);
    d3_impar = esImpar(d3);
    d2_impar = esImpar(d2);
    d1_impar = esImpar(d1);

    // = C1 * R1 + C2 * R2 + C3 * R3 ...
    suma = d4_impar * d4 + d3_impar * d3 + d2_impar * d2 + d1_impar * d1;

    return suma;
}

int main() {
    short numero;
    cout << "Ingrese el numero de 4 digitos: ";
    cin >> numero;
    cout << "La suma de digitos impares es: " << sumaDigitosImpares(numero) << endl;
}