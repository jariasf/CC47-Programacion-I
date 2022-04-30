#include <iostream>
using namespace std;

void generarNumerosAleatorios(int n) {
    int iteracion = 1, numero;
    while (iteracion <= n) {
        numero = rand() % 10;
        cout << numero << endl;
        iteracion++;
    }
}

int main() {
    srand(time(NULL));
    int n;
    cout << "Ingrese cantidad de numeros a generar: ";
    cin >> n;
    generarNumerosAleatorios(n);
    return 0;
}