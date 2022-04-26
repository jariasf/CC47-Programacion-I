#include <iostream>
using namespace std;

/*
1, 2, 3, 4, 5
*/

void imprimirCincoPrimerosNumeros() {
    int n1 = 1, n2 = 2, n3 = 3, n4 = 4, n5 = 5;
    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    cout << n4 << endl;
    cout << n5 << endl;
}

void imprimirPrimerosNumeros(int n) {
    int contador = 1;
    while ( contador <= n ) {
        // Mientras la expresion se cumpla
        // Ejecutamos este bloque de instrucciones
        cout << "contador = " << contador << endl; // contador = 1
        contador = contador + 1; // contador = contador + 1; ++contador;
    }

    /*
    contador = 1
    contador++;  contador = 1 + 1 = 2;
    contador++;  contador = 2 + 1 = 3;
    contador++;  contador = 3 + 1 = 4;
    contador++;  contador = 4 + 1 = 5;
    contador++;  contador = 5 + 1 = 6;
    */

    /*
    contador = 1
    contador = contador + 2;  contador = 1 + 2 = 3;
    contador = contador + 2;  contador = 3 + 2 = 5;
    contador += 2;  contador = 5 + 2 = 7;
    */

    cout << "Fin de while" << endl;
}

int main() {
    int n;
    cout << "Ingrese el numero de elementos que desee imprimir: ";
    cin >> n;
    imprimirPrimerosNumeros(n);
    return 0;
}