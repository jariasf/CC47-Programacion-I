#include <iostream>
using namespace std;

int contarRepetidos(int *a, int n, int num) {
    int contador = 0;
    for (int i = 0; i < n; ++i) {
        if (num == a[i]) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int n, num;
    int* a;

    do {
        cout << "Ingrese el valor de n: ";
        cin >> n;
    } while (n <= 0);

    a = new int[n];

    for (int i = 0; i < n; ++i) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> a[i];
    }

    cout << "Ingrese el numero a buscar: ";
    cin >> num;

    int repetidos = contarRepetidos(a, n, num);
    cout << "El numero de veces que se encontro el numero " << num << " es " << repetidos << endl;

    delete[]a;
    return 0;
}