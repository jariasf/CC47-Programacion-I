#include <iostream>
using namespace std;

int ingresarValorK() {
    int k;
    do {
        cout << "Ingrese k: ";
        cin >> k;
    } while (k < 0 || k > 20);
    //} while ( !(k >= 0 && k <= 20) );
    return k;
}

double potencia(double base, int exponente ) {
    double resultado = 1;
    for (int i = 1; i <= exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}

int factorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

double calcularExponencial(double a, int k) {
    double suma = 0;
    /*
          n=0  n=1 n=2 ....                            n=k
    suma = 1 + a + a^2/2! + a^3/3!  ...  + a^i/i! + ...
    
    */
    for (int i = 0; i <= k; ++i) {
        suma = suma + potencia(a, i)/factorial(i);
    }
    return suma;
}

int main() {
    int k = ingresarValorK();
    double a;
    cout << "Ingrese a: ";
    cin >> a;
    cout << "\nEl resultado de e^a sera " << calcularExponencial(a, k) << endl;
    return 0;
}