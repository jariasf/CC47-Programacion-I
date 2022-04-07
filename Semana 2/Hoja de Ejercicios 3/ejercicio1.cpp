#include <iostream>
using namespace std;

int main() {
    int numero;
    double resultado;
    bool menor10, mayor10;

    cout << "Ingrese un numero: ";
    cin >> numero;

    menor10 = (numero < 10);   // Condicion1
    mayor10 = (numero >= 10);  // Condicion2

    // Resultado = Condicion1 * Resultado1 + Condicion2 * Resultado2;
    resultado = menor10 * (numero / 4.0) + mayor10 * ( 3 * numero );

    cout << "El resultado es: "<< resultado <<endl;

    return 0;
}