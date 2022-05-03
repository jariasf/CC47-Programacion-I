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

bool esPar(int n) {
    return (n % 2 == 0);
}

int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

double sumatoria(int n) {
    double suma = 0;
    /*
    i   1      2      3      4      5      6    ... n
    s = 1/1! - 2/2! + 3/3! - 4/4! + 5/5! - 6/6! ... n/n!
    n = 1 ->  s = 1/1! = 1
    n = 2 ->  s = 1/1! - 2/2! = 1 - 1 = 0
    n = 3 ->  s = 1/1! - 2/2! + 3/3! = 1 - 1 + 3/6 = 0.5
    */
    for (int i = 1; i <= n; ++i) {
        if (esPar(i)) {
            suma = suma - i/(double)factorial(i);
        }
        else {
            suma = suma + i/(double)factorial(i);
        }
    }
    return suma;
}

int main() {
    int n = ingresarNumero();
    cout << "La suma de los " << n << " primeros terminos es " << sumatoria(n) << endl;
    return 0;
}