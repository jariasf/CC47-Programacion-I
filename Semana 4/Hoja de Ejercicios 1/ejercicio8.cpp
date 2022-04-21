#include <iostream>
using namespace std;

int main() {
    char sexo;
    short edad;
    double pulsaciones;
    cout << "Ingrese el sexo de la persona (F o M): ";
    cin >> sexo;
    cout << "Ingrese la edad de la persona: ";
    cin >> edad;

    if ( (sexo == 'F' || sexo == 'M') && (edad > 0) ) {
        if (sexo == 'F') {
            pulsaciones = (220 - edad) / 10.0;
        }
        else {
            pulsaciones = (210 - edad) / 10.0;
        }
        cout << "El número debe ser de " << pulsaciones << " pulsaciones por cada 10 segundos aproximadamente." << endl;
    }
    else {
        cout << "Entrada incorrecta" << endl;
    }
    return 0;
}