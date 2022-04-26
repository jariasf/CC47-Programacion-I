#include <iostream>
using namespace std;

/*
suma = 1 + 2 + 3 + 4 + 5 = 15

contador = 1;
contador++;  contador = 2;
contador++;  contador = 3;
contador++;  contador = 4;
contador++;  contador = 5;
contador++;  contador = 6; --------


contador = 1; suma = 0;
suma = suma + contador;   suma = 0 + 1 = 1;
contador++;   contador = 2;

contador = 2; suma = 1;
suma = suma + contador;   suma = 1 + 2 = 3;
contador++;   contador = 3;

contador = 3; suma = 3;
suma = suma + contador;   suma = 3 + 3 = 6; // 1 + 2 + 3
contador++;   contador = 4;


*/

/*
suma = 0 = 0
suma = 0 + 1 = 1
suma = 0 + 1 + 2 = 3
suma = 0 + 1 + 2 + 3 = 6
suma = 0 + 1 + 2 + 3 + 4 = 10
suma = 0 + 1 + 2 + 3 + 4 + 5 = 15
suma = 0 + 1 + 2 + 3 + 4 + 5 + 6 = 21 ...
*/

int calcularSumaDePrimerosNumeros(int n) {
    int suma = 0;
    int contador = 1;
    while (contador <= n) {
        suma = suma + contador;
        contador++; // contador = contador + 1;
    }
    return suma;
}

int main() {
    int n;
    cout << "Ingrese el limite superior: ";
    cin >> n;
    cout<<"La suma de los "<<n<<" primeros numeros es: " << calcularSumaDePrimerosNumeros(n) << endl;

    return 0;
}