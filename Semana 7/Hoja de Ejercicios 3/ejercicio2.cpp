#include <iostream>
using namespace std;

int ingresarNumero() {
    int n;
    do {
        cout << "Ingrese un numero: ";
        cin >> n;
    } while (n < 0);
    return n;
}

int factorial(int n) {
    int resultado = 1; // 0! y 1!
    /*
    1! = 1
    2! = 1 * 2 = 2 
    3! = 1 * 2 * 3 = 2 * 3 = 6 
    4! = 1 * 2 * 3 * 4 = 6 * 4 = 24 
    5! = 1 * 2 * 3 * 4 * 5 = 24 * 5 = 120
    */
    for (int i = 2; i <= n; ++i) { 
        //resultado = resultado * i; 
        resultado *= i;
    }
    return resultado;
}

int main() {
    int n = ingresarNumero();
    cout << "El factorial de " << n << " es " << factorial(n) << endl;
    return 0;
}