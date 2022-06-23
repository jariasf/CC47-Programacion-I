#include <iostream>
using namespace std;

void generarMostrarDatos(int **temperaturas, int meses, int estaciones) {
    for (int i = 0; i < meses; ++i) {
        for (int j = 0; j < estaciones; ++j) {
            temperaturas[i][j] = rand() % 101;
        }
    }

    for (int i = 0; i < meses; ++i) {
        cout << "Mes " << i + 1 << endl;
        for (int j = 0; j < estaciones; ++j) {
            cout << "Temperatura de estacion " << j + 1 << " = " << temperaturas[i][j] << endl;
        }
    }
}

void temperaturaMasAlta(int** temperaturas, int meses, int estaciones) {
    int mayor_temp = temperaturas[0][0];
    int mes = 0, estacion = 0;

    for (int i = 0; i < meses; ++i){
        for (int j = 0; j < estaciones; ++j) {
            if (temperaturas[i][j] > mayor_temp) {
                mayor_temp = temperaturas[i][j];
                mes = i;
                estacion = j;
            }
        }
    }

    cout << "\nLa temperatura mas alta es " << mayor_temp << endl;
    cout << "La temperatura mas alta se obtiene en el mes " << mes + 1 << " y estacion " << estacion + 1<<endl;
}

void calcularPromedioPorMes(int **temperaturas, int meses, int estaciones) {
    double promedio;
    cout << "\nPromedio de temperaturas por mes" << endl;

    for (int i = 0; i < meses; ++i) {
        promedio = 0.;
        for (int j = 0; j < estaciones; ++j) {
            promedio += temperaturas[i][j];
        }
        promedio /= estaciones;
        cout << "El promedio del mes " << i + 1 << " es " << promedio << endl;
    }
}

void calcularPromedioPorEstacion(int **temperaturas, int meses, int estaciones) {
    double promedio;
    cout << "\nPromedio de temperaturas por estacion" << endl;

    for (int j = 0; j < estaciones; ++j) {
        promedio = 0.;
        for(int i = 0; i < meses; ++i){
            promedio += temperaturas[i][j];
        }
        promedio /= meses;
        cout << "El promedio de la estacion " << j + 1 << " es " << promedio << endl;
    }

}

int main() {
    srand(time(NULL));
    int meses = 12, estaciones = 30;
    int** temperaturas = new int* [meses];
    for (int i = 0; i < meses; ++i)
        temperaturas[i] = new int[estaciones];

    generarMostrarDatos(temperaturas, meses, estaciones);
    temperaturaMasAlta(temperaturas, meses, estaciones);
    calcularPromedioPorMes(temperaturas, meses, estaciones);
    calcularPromedioPorEstacion(temperaturas, meses, estaciones);

    for (int i = 0; i < meses; ++i)
        delete[]temperaturas[i];
    delete[]temperaturas;

    return 0;
}