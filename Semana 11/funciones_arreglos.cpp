#include <iostream>

using namespace std;

void incrementarEnUno(int *a, int n) {
    for (int i = 0; i < n; ++i) {
        a[i] = a[i] + 1;
    }
}

void mostrarValores(int *a, int n) {
    for (int i = 0; i < n; ++i)
        cout<<"El valor "<<i+1<<" es: " << a[i] << endl;
}

int main() {
    int n = 5;
    int* arreglo = new int[n]{1,34,-1,56,5};

    cout << "Valores iniciales" << endl;
    mostrarValores(arreglo, n);
    // Incrementar los elementos del arreglo
    incrementarEnUno(arreglo, n);
    cout << "\nValores luego de incrementar" << endl;
    mostrarValores(arreglo, n);	

    delete[]arreglo;
    return 0;
}