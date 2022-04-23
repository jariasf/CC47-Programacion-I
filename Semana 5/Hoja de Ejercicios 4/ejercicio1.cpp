#include <iostream>
using namespace std;
#define INVALIDO -1

double calcularMonto(char tipo_producto, int sacos) {
    // caso invalido
    if (sacos < 0) {
        cout << "El numero de sacos ingresado es incorrecto" << endl;
        return INVALIDO;
    }

    double monto;
    switch (tipo_producto) {
        case 'P': monto = sacos * 20.5; break;
        case 'C': monto = sacos * 19.4; break;
        case 'L': monto = sacos * 32.3; break;
        case 'A': monto = sacos * 16.5; break;
        case 'M': monto = sacos * 19.8; break;
        default: 
            cout << "El tipo de producto es incorrecto"<<endl;
            return INVALIDO;
    }

    return monto;
}

int main() {

    char tipo_producto;
    int sacos;
    double monto;

    cout << "Ingrese el tipo de producto: ";
    cin >> tipo_producto;
    cout << "Ingrese la cantidad de sacos a comprar: ";
    cin >> sacos;

    monto = calcularMonto(tipo_producto, sacos);

    if (monto != INVALIDO) {
        cout << "El monto a pagar es " << monto << endl;
    }

    return 0;
}