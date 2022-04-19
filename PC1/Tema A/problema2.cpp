#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese numero de 4 digitos: ";
    cin >> numero;

    int d1 = numero % 10;
    numero /= 10;
    int d2 = numero % 10;
    numero /= 10;
    int d3 = numero % 10;
    int d4 = numero / 10;

    bool esPalindromo = (d1 == d4 && d2 == d3);
    bool condicion1 = (d4 > d1);
    bool condicion2 = (d4 < d1);
    bool condicion3 = (d4 == d1);

    int resultado1 = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
    int resultado2 = d1 + d2 + d3 + d4;
    int resultado3 = d3 * 10 + d2;

    int resultado = condicion1 * resultado1 + condicion2 * resultado2 + condicion3 * resultado3;

    cout << "El numero ingresado es palindromo (0: No; 1: Si): " << esPalindromo << endl;
    cout << "El resultado de la operacion es: " << resultado << endl;

    return 0;
}
