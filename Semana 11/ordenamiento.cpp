#include <iostream>
using namespace std;

void mostrarArreglo(int *A, int n) {
    for (int i = 0; i < n; ++i)
        cout << A[i] << " ";
    cout << endl;
}

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void ordenar(int *A, int n) {
    int indice_menor, menor;
    for (int i = 0; i < n - 1; ++i) {
        menor = A[i];
        indice_menor = i;
        for (int j = i + 1; j < n; ++j) {
            if (A[j] < menor) {
                menor = A[j];
                indice_menor = j;
            }
        }
        if (i != indice_menor) {
            intercambio(A[i], A[indice_menor]);
        }
    }
}


int main() {
    int* A;
    int n;
    do {
        cout << "Ingrese el numero de elementos: ";
        cin >> n;
    } while (n <= 0);
    A = new int[n];

    for (int i = 0; i < n; ++i) {
        A[i] = rand() % 101;
    }
    cout << "Arreglo original" << endl;
    mostrarArreglo(A, n);
    ordenar(A, n);
    cout << "\nArreglo ordenado" << endl;
    mostrarArreglo(A, n);
    delete []A;
    return 0;
}