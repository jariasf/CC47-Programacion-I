#include <iostream>
using namespace std;

int main() {

    double distancia, monto, descuento;
    int dias_estancia;
    bool mayor2500;

    // Entrada de datos
    cout << "Ingrese la distancia a recorrer: ";
    cin >> distancia;
    cout << "Ingrese numero de dias de estancia: ";
    cin >> dias_estancia;

    // Calculamos el monto actual
    monto = distancia * 1.5 + dias_estancia * 520;

    // Calculamos el descuento
    mayor2500 = (monto > 2500); // Condición1
    descuento = mayor2500 * ( monto * 0.35 ); // Condicion1 * Resultado1

    // Aplicamos descuento
    monto = monto - descuento;
    // monto -= descuento;

    // Mostramos el resultado
    cout << "El monto total a pagar es: " << monto << endl;

    return 0;
}