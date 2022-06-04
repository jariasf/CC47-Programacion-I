#include <iostream>
using namespace std;

int generarValoresEnRango(int low, int up){
    return low + rand() % (up - low + 1);
}

void generarYMostrarDatos(int *vpuntajes, int n) {
    // Generar datos
    for (int i = 0; i < n; ++i) {
        vpuntajes[i] = generarValoresEnRango(0, 100);
    }

    // Mostrar datos
    cout << "Notas de alumnos generados" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "La nota de alumno " << i + 1 << ": " << vpuntajes[i] << endl;
    }
}

void listaDebajoDelPromedio(int *vpuntajes, int n) {
    cout << "\nPuntajes debajo de promedio general" << endl;

    int suma = 0;
    double promedio;
    for (int i = 0; i < n; ++i) {
        suma += vpuntajes[i];
    }
    promedio = suma / (double)n;
    cout << "El promedio general es " << promedio << endl;

    for (int i = 0; i < n; ++i) {
        if (vpuntajes[i] < promedio) {
            cout << "El alumno " << i + 1 << " tiene puntaje " << vpuntajes[i] << endl;
        }
    }
}

/*
Una función Cantidad_menores, que recibe el vector de puntajes y retorne la cantidad
de alumnos que obtuvieron el menor puntaje.
*/
int cantidadMenores(int *vpuntajes, int n) {
    int menor, cantidad;
    // TODO: 1. Hallar la menor nota
    menor = vpuntajes[0];
    for (int i = 1; i < n; ++i) {
        if (menor > vpuntajes[i]) {
            menor = vpuntajes[i];
        }
    }

    // TODO: 2. Contar todas las que sean iguales a la menor nota anteriormente hallada
    cantidad = 0;
    for (int i = 0; i < n; ++i) {
        if (vpuntajes[i] == menor) {
            cantidad++;
        }
    }
    return cantidad;
}

int main() {
    srand(time(NULL));
    int n = 40;
    int* vpuntajes = new int[n];

    generarYMostrarDatos(vpuntajes, n);
    listaDebajoDelPromedio(vpuntajes, n);

    cout << "\nCantidad de alumnos que obtuvieron la menor nota es " << cantidadMenores(vpuntajes, n) << endl;
    delete[]vpuntajes;
    return 0;
}