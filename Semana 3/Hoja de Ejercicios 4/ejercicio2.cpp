#include <iostream>
using namespace std;

int main() {	
    char sexo;
    short edad;

    cout << "Ingrese el sexo de la persona: ";
    cin >> sexo;
    cout << "Ingrese la edad de la persona: ";
    cin >> edad;

    bool M_menor25 = (sexo == 'M' && edad < 25);
    bool M_mayor25 = (sexo == 'M' && edad >= 25);
    bool F_menor21 = (sexo == 'F' && edad < 21);
    bool F_mayor21 = (sexo == 'F' && edad >= 21);

    // = C1*R1 + C2*R2 + C3*R3 ...
    int pago = M_menor25 * 1000 + M_mayor25 * 700 + F_menor21 * 800 + F_mayor21 * 500;

    cout << "El pago para el seguro del automovil es: " << pago << endl;
    return 0;
}