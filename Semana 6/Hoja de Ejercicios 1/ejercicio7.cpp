#include <iostream>
using namespace std;

// Calcular el promedio por alumno
double calcularPromedio(int alumno) {
    double promedio, TF, EF, EP;
    cout << "Ingrese el EF del Alumno "<<alumno<<": ";
    cin >> EF;
    cout << "Ingrese el EP del Alumno " << alumno << ": ";
    cin >> EP;
    cout << "Ingrese el TF del Alumno " << alumno << ": ";
    cin >> TF;
    promedio = 0.55 * EF + 0.3 * EP + 0.15 * TF;
    return promedio;
}

void calcularPromedioFinal(int num_alumnos) {
    int alumno = 1;
    double promedio;
    while ( alumno <= num_alumnos ) {
        cout << "\n";
        promedio = calcularPromedio(alumno);
        cout << "Su promedio final es: " << promedio << endl;
        alumno++;
    }
}

int main() {
    int num_alumnos;
    cout << "Ingrese el numero de alumnos: ";
    cin >> num_alumnos;
    calcularPromedioFinal(num_alumnos);
    return 0;
}