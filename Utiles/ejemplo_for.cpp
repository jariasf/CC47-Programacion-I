#include <iostream>
using namespace std;

void contadorUsandoWhile() {
    cout << "Contador usando while" << endl;
    int contador = 1;
    while (contador <= 10) {
        cout << contador << endl;
        contador++;
    }
}

void contadorUsandoFor() {
    cout << "Contador usando for" << endl;
    for (int contador = 1; contador <= 10; contador++ ) {
        cout << contador << endl;
    }
}

void contadorInfinitoUsandoFor() {
    for (int contador = 1; ; contador++) {
        cout << contador << endl;
        if (contador == 20) {
            break;
        }
    }
}

void contadorDecrecienteUsandoFor() {
    cout << "Contador usando for" << endl;
    for (int contador = 10; contador >= 1; contador--) {
        cout << contador << endl;
    }
}

void sumaUsandoFor() {
    cout << "Suma usando for" << endl;
    int suma = 0;
    //for (int contador = 1, contador_2 = 0 ; contador <= 10 && contador_2<= 3; contador++, contador_2 += 2) {
    for (int contador = 1; contador <= 10 ; contador++) {
        suma += contador;
    }
    cout << "La suma es: " << suma << endl;
}

int main() {
    contadorUsandoWhile();
    cout << endl;
    contadorUsandoFor();
    cout << endl;
    contadorDecrecienteUsandoFor();
    cout << endl;
    sumaUsandoFor();
    return 0;
}