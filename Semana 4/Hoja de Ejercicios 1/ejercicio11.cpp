#include <iostream>
using namespace std;

double calcularMontoPagar(int consumo) {
    double monto;
    if (consumo <= 4) {
        monto = 50.0;
    }
    else if (consumo > 4 && consumo <= 8) {
        monto = 85.0;
    }
    else {
        monto = 85.0 + (consumo - 8) * 4.5;
    }
    return monto;
}

int main() {

    int consumo;
    double monto;
    cout << "Ingrese el consumo en GB: ";
    cin >> consumo;

    // Debe validar que el consumo debe ser mayor o igual a cero.
    if ( consumo >= 0 ) {
        monto = calcularMontoPagar(consumo);
        cout << "El pago a realizar es " << monto << endl;
    }
    else {
        cout << "El consumo ingresado es invalido" << endl;
    }

    return 0;
}