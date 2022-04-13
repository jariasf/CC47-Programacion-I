#include <iostream>
using namespace std;

int valorAbsoluto(int numero) {
    /*
    bool condicion = (numero < 0);
    int resultado = (numero * -1);
    int valor_absoluto = condicion * resultado;
    return valor_absoluto;
    */
    if (numero < 0) {
        //numero = -numero;
        numero *= -1;
    }
    return numero;
}

int main() {
    int numero;
    cout << "Ingresar el numero entero: ";
    cin >> numero;
    cout << "El valor abosulto del numero es: " << valorAbsoluto(numero) << endl;
    return 0;
}