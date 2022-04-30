#include <iostream>
using namespace std;

bool esEntradaValida(int num_alumnos) {
    if (num_alumnos < 0) {
        cout << "El numero ingresado es incorrecto" << endl;
        return false;
    }
    return true;
}

void validacionConFunciones() {
    int num_alumnos;
    do {
        // Se ejecuta una vez y si se cumple la condicion va continuar ejecutandose
        cout << "Ingrese el numero de alumnos: ";
        cin >> num_alumnos;
    } while (!esEntradaValida(num_alumnos));
    cout << "Ingreso valido" << endl;
}

void validacionSinFunciones() {
    int num_alumnos;
    do {
        // Se ejecuta una vez y si se cumple la condicion va continuar ejecutandose
        cout << "Ingrese el numero de alumnos: ";
        cin >> num_alumnos;
        if (num_alumnos < 0) {
            cout << "El numero ingresado es incorrecto" << endl;
        }
    } while (num_alumnos < 0);
    cout << "Ingreso valido" << endl;
}

int main() {
    validacionConFunciones();
    //validacionSinFunciones();
    return 0;
}