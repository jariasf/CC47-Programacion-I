#include <iostream>
using namespace std;

/*
Implementar una función que calcule si dos números enteros son divisibles, es decir, que su
módulo es igual a cero.

Aprovechando dicha función, hacer un programa que imprima todos los divisores de un número
dado.
*/
// Notación camel case
// Notación Pascal  Mayuscula
// Notación snake case

// n = 10, d = 5   -->  10 % 5 = 0
// n = 6,  d = 3   -->   6 % 3 = 0
// n = 7,  d = 3   -->   7 % 3 = 1
// n = 8,  d = 3   -->   8 % 3 = 2
bool esDivible(int n, int d) {
    if (n % d == 0) {
        return true;
    }
    return false;
}

/*
numero = 12
divisores = 1, 2, 3, 4, 6, 12

i = 1, 2, 3, 4, 5, ... , 10, 11, 12
*/
void imprimirDivisores(int numero) {
    for (int i = 1; i <= numero; ++i) {
        if (esDivible(numero, i)) {
            cout << i << " ";   
        }
    }
    cout << endl;
}

int main() {
    int numero;
    cout << "Ingrese numero: ";
    cin >> numero;
    imprimirDivisores(numero);
    return 0;
}