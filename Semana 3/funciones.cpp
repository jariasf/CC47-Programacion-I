#include <iostream>
using namespace std;

int sumar(int a, int b);
int restar(int a, int b);
void mostrarSalida(int a, int b);

int main(){
    int valor1, valor2, suma, resta;

    cout << "Ingrese valor 1: ";
    cin >> valor1;
    cout << "Ingrese valor 2: ";
    cin >> valor2;

    suma = sumar(valor1, valor2);
    resta = restar(valor1, valor2);
    //suma = valor1 + valor2;
    //resta = valor1 - valor2;
    mostrarSalida(suma, resta);
    return 0;
}

int sumar(int a, int b) {
    int suma = a + b;
    return suma;
}

int restar(int a, int b) {
    int resta = a - b;
    return resta;
}

void mostrarSalida(int suma, int resta) {
    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    return;
}