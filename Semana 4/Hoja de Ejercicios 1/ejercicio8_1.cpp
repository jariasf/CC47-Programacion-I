#include <iostream>
using namespace std;

/*
Entradas invalidas (falso o false)
sexo = 'A', sexo = 'C', sexo = 'Z'
edad = -12, edad = 0, edad = -2134

Entradas validas (verdadero o true)
sexo = 'F', sexo = 'M'
edad = 1, edad = 50
*/
bool validarSexo(char sexo) {
    if (sexo == 'F' || sexo == 'M') {
        return true;
    }
    return false;
}

bool validarEdad(int edad) {
    if (edad > 0) {
        return true;
    }
    return false;
}

int main() {
    char sexo;
    short edad;
    double pulsaciones;
    cout << "Ingrese el sexo de la persona (F o M): ";
    cin >> sexo;
    cout << "Ingrese la edad de la persona: ";
    cin >> edad;

    if (validarEdad(edad) && validarSexo(sexo)) {
        if (sexo == 'F') {
            pulsaciones = (220 - edad) / 10.0;
        }
        else {
            pulsaciones = (210 - edad) / 10.0;
        }
        cout << "El n?mero debe ser de " << pulsaciones << " pulsaciones por cada 10 segundos aproximadamente." << endl;
    }
    else {
        cout << "Entrada incorrecta" << endl;
    }

    return 0;
}