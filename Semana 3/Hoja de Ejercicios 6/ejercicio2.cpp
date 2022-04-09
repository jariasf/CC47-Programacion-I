#include <iostream>
using namespace std;

int main() {
    long long codigo;
    short anio, mes, dia;
    char tipo_producto;
    bool perecible;

    cout << "Ingrese codigo de barras: ";
    cin >> codigo;

    // 120820206712
    perecible = (codigo % 100 == 0);  // 1 o 0
    // Recordar que codigo /= 100  ---->  codigo = codigo / 10
    codigo /= 100;                    // 1208202067

    tipo_producto = codigo % 100;     // 67 -> 'C'
    codigo /= 100;                    // 12082020

    anio = codigo % 10000;            // 2020
    codigo /= 10000;                  // 1208

    mes = codigo % 100;               // 08
    dia = codigo / 100;               // 12

    cout << "Dia de vencimiento: " << dia << endl;
    cout << "Mes de vencimiento: " << mes << endl;
    cout << "Año de vencimiento: " << anio << endl;
    cout << "El tipo de producto es: " << tipo_producto << endl;
    cout << "Producto perecible (0: No; 1: Sí): " << perecible << endl;
    return 0;
}