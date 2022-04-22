#include <iostream>
using namespace std;

int main() {
    // short, int , long int, long long  -> 3, 24, 12345, 2343423423
    // float, double -> 12.5, 1.1, 1.0, 0.5
    short tipo1, tipo2, tipo3;
    float propina, monto;

    cout << "Ingrese la cantidad de caramelos que va a comprar por el Tipo 1: ";
    cin >> tipo1;
    cout << "Ingrese la cantidad de caramelos que va a comprar por el Tipo 2: ";
    cin >> tipo2;
    cout << "Ingrese la cantidad de caramelos que va a comprar por el Tipo 3: ";
    cin >> tipo3;
    cout << "Ingrese el Monto de la Propina: ";
    cin >> propina;

    // Si en la tienda tienen 3 tipos de caramelos: Ambrosoli, Tic Tac y Donofrio,
    // cuyos precios son 0.75, 1.15 y 0.65, respectivamente
    monto = tipo1 * 0.75 + tipo2 * 1.15 + tipo3 * 0.65;
    cout << "El monto total de la compra es: " << monto << endl;

    if (propina >= monto) {
        cout << "La propina es suficiente para pagar por los caramelos" << endl;
    }
    else {
        cout << "La propina no es suficiente para pagar por los caramelos" << endl;
    }

    return 0;
}