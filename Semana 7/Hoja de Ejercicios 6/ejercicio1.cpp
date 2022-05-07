#include <iostream>
using namespace std;

double ingresarA() {
    double a;
    do {
        cout << "Ingrese el valor de a= ";
        cin >> a;
    } while ( a < 4 || a > 6 );
    return a;
}

double ingresarB() {
    double b;
    do {
        cout << "Ingrese el valor de b= ";
        cin >> b;
    } while ( b < 1 || b > 3 );
    return b;
}

int ingresarN() {
    int n;
    do {
        cout << "Ingrese el valor de n= ";
        cin >> n;
    } while ( !(n >= 1 && n <= 10) );
    return n;
}

double potencia(double base, int exponente) {
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

double calcularSumatoria(double a, double b, int n) {
    double suma = 0;
    /*
    s = (-1)^(i+1) * (a^i b^(i+1))/((a-b)i!)
    */
    for (int i = 1; i <= n; ++i) {
        double numerador = potencia(a, i) * potencia(b, i+1);
        double denominador = (a - b) * factorial(i);
        suma = suma + potencia(-1, i+1) * numerador/denominador;
    }

    return suma;
}

int main() {
    double a = ingresarA();
    double b = ingresarB();
    int n = ingresarN();
    cout << "\nEl valor de la sumatoria es S = " << calcularSumatoria(a, b, n) << endl;
    return 0;
}