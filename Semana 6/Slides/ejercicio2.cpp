#include <iostream>
using namespace std;
/*
7 6 5 4 3 2 1

  n = 7   imprimir 7
  n = 6   imprimir 6
  n = 5   imprimir 5
  n = 4
  ...
  n = 1   imprimir 1
  n = 0   ---
*/
void imprimirPrimerosNumerosDecreciente(int n) {
    while (n >= 1) {
        cout << n << endl; // 7
        n--; //n = n - 1; --n;
    }
    cout << "Fin de ciclo" << endl;
}

int main() {
    int n;
    cout << "Ingrese el numero inicial de la secuencia: ";
    cin >> n;
    imprimirPrimerosNumerosDecreciente(n);
    return 0;
}
