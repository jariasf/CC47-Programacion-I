#include <iostream>
using namespace std;
#define INVALIDO -1

double casoA(int cursos) {
    double monto;
    if (cursos >= 1 && cursos <= 5) {
        monto = 400.0;
    }
    else if (cursos >= 6 && cursos <= 8) {
        monto = 600.0;
    }
    else {
        monto = 900.0;
    }
    return monto;
}

double casoB(int cursos) {
    double monto;
    if (cursos >= 1 && cursos <= 3) {
        monto = 350.0;
    }
    else if (cursos >= 4 && cursos <= 7) {
        monto = 500.0;
    }
    else {
        monto = 700.0;
    }
    return monto;
}

double casoC(int cursos) {
    double monto;
    if (cursos >= 1 && cursos <= 3) {
        monto = 320.0;
    }
    else if (cursos >= 4 && cursos <= 7) {
        monto = 480.0;
    }
    else {
        monto = 685.0;
    }
    return monto;
}

double casoD(int cursos) {
    double monto;
    if (cursos >= 1 && cursos <= 4) {
        monto = 310.0;
    }
    else if (cursos >= 5 && cursos <= 8) {
        monto = 475.0;
    }
    else {
        monto = 680.0;
    }
    return monto;
}

double calcularImporte(char escala_pago, short cursos) {

    if (cursos <= 0) {
        cout << "El numero de cursos es incorrecto" << endl;
        return INVALIDO;
    }

    double importe, cuota_fija, cuota_variable;
    switch (escala_pago) {
        case 'A': cuota_variable = casoA(cursos); break;
        case 'B': cuota_variable = casoB(cursos); break;
        case 'C': cuota_variable = casoC(cursos); break;
        case 'D': cuota_variable = casoD(cursos); break;
        default:
            cout << "La escala de pago ingresada es invalida" << endl;
            return INVALIDO;
    }
    cuota_fija = 350.0;
    importe = cuota_fija + cuota_variable;
    return importe;
}

int main() {
    char escala_pago;
    short cursos;
    double importe;

    cout << "Ingresa la escala de pago: ";
    cin >> escala_pago;
    cout << "Ingresa el numero de cursos: ";
    cin >> cursos;

    importe = calcularImporte(escala_pago, cursos);
    if (importe != INVALIDO) {
        cout << "El importe a cancelar es de S/" << importe << endl;
    }

    return 0;
}