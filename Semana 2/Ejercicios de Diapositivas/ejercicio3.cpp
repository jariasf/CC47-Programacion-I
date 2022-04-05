#include <iostream>
using namespace std;

int main() {
    /*
        Entrada:
        numero = 492

        unidades = 492 % 10 = 2
        numero = numero / 10 = 492/10 = 49
        decimales = 49 % 10 = 9
        centenas = 49 / 10 = 4

        Division real 492/10.0 = 49.2
        En PSeInt -> trunc(492/10) = trunc(49.2) = 49
        En C++ -> 492/10 = 49

        Salida:
        4 + 9 + 2 = 15

	*/

    // Declaración de variables
    int numero, unidades, decenas, centenas, suma;

    // Entrada de datos
    cout << "Ingrese un numero de 3 digitos: ";
    cin >> numero;

    // Proceso
    unidades = numero % 10;
    numero = numero / 10;
    decenas = numero % 10;
    centenas = numero / 10;

    suma = unidades + decenas + centenas;

    // Salida
    cout << "La suma de los digitos es:\n";
    cout << centenas << " + " << decenas << " + " << unidades << " = " << suma << endl;
    return 0;
}
