#include<iostream>
using namespace std;

void ingresarNumeroComplejo(double &real, double &imag) {
    cout << "Parte Real: ";
    cin >> real;
    cout << "Parte Imaginaria: ";
    cin >> imag;
}

void opcionAReferencia() {
    double real1, imag1, real2, imag2;
    cout << "Numero 1" << endl;
    ingresarNumeroComplejo(real1, imag1);
    cout << "\nNumero 2" << endl;
    ingresarNumeroComplejo(real2, imag2);
    cout << "\n(" << real1 << "+" << imag1 << "i) + " << "(" << real2 << "+" << imag2 << "i)";
    cout << " = (" << real1 + real2 << "+" << imag1 + imag2 << "i)" << endl;
}

void opcionA() {
    double real1, imag1, real2, imag2;
    cout << "Numero 1" << endl;
    cout << "Parte Real: ";
    cin >> real1;
    cout << "Parte Imaginaria: ";
    cin >> imag1;
    cout << "\nNumero 2" << endl;
    cout << "Parte Real: ";
    cin >> real2;
    cout << "Parte Imaginaria: ";
    cin >> imag2;
    cout << "\n(" << real1 << "+" << imag1 << "i) + " << "(" << real2 << "+" << imag2 << "i)";
    cout << " = (" << real1 + real2 << "+" << imag1 + imag2 << "i)" << endl;
}

void opcionB() {
    
}

int main() {
    char opcion;
    do {
        cout << "\t\t\tMENU" << endl;
        cout << "\t\t\t====" << endl;
        cout << "A. Sumar 2 Numeros Complejos" << endl;
        cout << "B. Restar 2 Numeros Complejos" << endl;
        cout << "X. Salir del Programa" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 'A': case 'a':
                opcionA();
                break;
            case 'B': case 'b':
                opcionB();
                break;
            case 'X': case 'x':
                break;
            default:
                cout << "Opcion incorrecta, ingrese nuevamente" << endl;
        }
        system("pause");
        cout << endl;
    } while (opcion != 'X' && opcion != 'x');

    return 0;
}