#include <iostream>
using namespace std;

struct Alumno {
    int codigo;
    int creditos;
    double promedio;
};

int nextInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

double nextDouble(double min, double max) {
    // Generamos valores entre 0 y 1 inclusive
    double normalizado = rand() / (double)RAND_MAX;
    // Escalamos por (max - min) y desplazamos por min
    return min + normalizado * (max - min);
}

void mostrarDatos(Alumno* alumnos, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "\nAlumno " << i + 1 << endl;
        cout << "Codigo: " << alumnos[i].codigo << endl;
        cout << "Creditos: " << alumnos[i].creditos << endl;
        cout << "Promedio Acumulado: " << alumnos[i].promedio << endl;
    }
}

void generarDatos(Alumno* alumnos, int n) {
    for (int i = 0; i < n; ++i) {
        alumnos[i].codigo = nextInt(10000000, 99999999);
        alumnos[i].creditos = nextInt(1, 50);
        alumnos[i].promedio = nextDouble(0, 20);
    }
    mostrarDatos(alumnos, n);
}


void ordenarAscendentePorCredito(Alumno *alumnos, int n) {
    int min_index;
    for (int i = 0; i < n - 1; ++i) {
        min_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (alumnos[j].creditos < alumnos[min_index].creditos) {
                min_index = j;
            }
        }
        swap(alumnos[i], alumnos[min_index]);
    }
}

void ordenarAscendentePorCredito2(Alumno* alumnos, int n) {
    int min_index;
    int min_creditos;
    for (int i = 0; i < n - 1; ++i) {
        min_index = i;
        min_creditos = alumnos[i].creditos;
        for (int j = i + 1; j < n; ++j) {
            if (alumnos[j].creditos < min_creditos) {
                min_creditos = alumnos[j].creditos;
                min_index = j;
            }
        }
        swap(alumnos[i], alumnos[min_index]);
    }
}


void ordenarDescendentePorPromedio(Alumno* alumnos, int n) {
    int max_index;
    for (int i = 0; i < n - 1; ++i) {
        max_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (alumnos[j].promedio > alumnos[max_index].promedio) {
                max_index = j;
            }
        }
        swap(alumnos[i], alumnos[max_index]);
    }
}

void mostrarAlumnosPorCreditos(Alumno* alumnos, int n, int creditos) {
    cout << "\n\nRelacion de alumnos con mas de " << creditos << " creditos matriculados" << endl;
    for (int i = 0; i < n; ++i) {
        if (alumnos[i].creditos > creditos) {
            cout << "\nCodigo: " << alumnos[i].codigo << endl;
            cout << "Credito: " << alumnos[i].creditos << endl;
            cout << "Promedio Acumulado: " << alumnos[i].promedio << endl;
        }
    }
}

void mostrarAlumnosConPromedioAprobado(Alumno* alumnos, int n) {
    cout << "\n\nRelacion de alumnos con promedio acumulado aprobado" << endl;
    for (int i = 0; i < n; ++i) {
        if (alumnos[i].promedio >= 13) {
            cout << "\nCodigo: " << alumnos[i].codigo << endl;
            cout << "Credito: " << alumnos[i].creditos << endl;
            cout << "Promedio Acumulado: " << alumnos[i].promedio << endl;
        }
    }
}

int main() {
    srand(time(NULL));
    int n;
    Alumno* alumnos;
    do {
        cout << "Ingrese el numero de alumnos: ";
        cin >> n;
    }while(n <= 0 || n > 50);

    // Reservamos memoria para el arreglo
    alumnos = new Alumno[n];

    // Generar Datos
    generarDatos(alumnos, n);

    // Ordenar ascendentemente la información de los alumnos en base al 
    // número de créditos e imprimir Código, número de créditos y promedio acumulado.
    ordenarAscendentePorCredito(alumnos, n);
    cout << "\nAlumnos ordenados de forma ascendente por credito" << endl;
    mostrarDatos(alumnos, n);

    // Ordenar descendentemente la información de los alumnos en base al promedio acumulado.
    ordenarDescendentePorPromedio(alumnos, n);
    cout << "\n\nAlumnos ordenados de forma descendente por promedio acumulado" << endl;
    mostrarDatos(alumnos, n);

    // Listar la relación de alumnos con más de 15 créditos matriculados.
    mostrarAlumnosPorCreditos(alumnos, n, 15);

    // Listar la relación de alumnos con promedio acumulado aprobado
    mostrarAlumnosConPromedioAprobado(alumnos, n);

    // Liberamos memoria
    delete[]alumnos;

    return 0;
}