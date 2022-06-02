#include <iostream>
using namespace std;

int generar(int low, int up) {
    return low + rand() % (up - low + 1);
}

int main() {
    srand(time(NULL));
    int num_alumnos, suma = 0;
    int* edades;
    int maximo, numero;
    bool encontrado;
    
    // Ingreso y validacion de alumnos
    do {
        cout << "Ingrese el numero de alumnos: ";
        cin >> num_alumnos;
    } while (num_alumnos <= 0);

    // Declaracion de arreglo
    edades = new int[num_alumnos];

    // Inicializacion con valores aleatorios entre 10 y 40
    for (int i = 0; i < num_alumnos; ++i) {
        edades[i] = generar(10, 40);
    }

    // Impresion de edades generadas aleatoriamente
    cout << "Edades de alumnos" << endl;
    for (int i = 0; i < num_alumnos; ++i) {
        cout << "La edad del alumnos " << i + 1 << " es: " << edades[i] << endl;
    }

    // Suma de edades
    for (int i = 0 ; i < num_alumnos; ++i) {
        suma += edades[i];
    }
    cout << "\nLa suma de edades es " << suma << endl;


    // Hallar mayor edad
    maximo = edades[0];
    for (int i = 1; i < num_alumnos; ++i) {
        if (maximo < edades[i]) {
            maximo = edades[i];
        }
    }
    cout << "\nLa edad mayor es "<<maximo<< endl;

    // Busqueda de edad de alumno
    cout << "\nIngrese edad a buscar: ";
    cin >> numero;

    encontrado = false;
    for (int i = 0; i < num_alumnos; ++i) {
        if (numero == edades[i]) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "Alumno con edad " << numero << " fue encontrado" << endl;
    }
    else {
        cout << "Alumno con edad " << numero << " no fue encontrado" << endl;
    }

    delete[]edades;
    return 0;
}