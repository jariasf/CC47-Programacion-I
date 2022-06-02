#include <iostream>
using namespace std;

void mostrarAprobados(int *notas, int n) {
    cout << "Aprobados" << endl;
    for (int i = 0; i < n; ++i) {
        if (notas[i] >= 13) {
            cout << "El alumnos "<<i+1<<" aprobo con " << notas[i] << endl;
        }
    }
}

int contarAprobados(int *notas, int n) {
    //TODO: Implementar el metodo de conteo
}

int main() {
    int num_notas;
    int* notas;

    do {
        cout << "Ingrese el numero de notas: ";
        cin >> num_notas;
    } while (num_notas <= 0);

    notas = new int[num_notas];

    for (int i = 0; i < num_notas; ++i) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];
    }

    //mostrarAprobados(int* notas, int n);
    mostrarAprobados(notas, num_notas);

    delete[]notas;
    return 0;
}