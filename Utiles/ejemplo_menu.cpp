#include<iostream>
using namespace std;

void opcion1() {
    cout << "Opcion 1" << endl;
}

void opcion2() {
    cout << "Opcion 2" << endl;
}

void opcion3() {
    cout << "Opcion 3" << endl;
}

int main() {
    int opcion;
    do {
        cout << "\t\t\tMENU PRINCIPAL" << endl;
        cout << "1. Problema 1" << endl;
        cout << "2. Problema 2" << endl;
        cout << "3. Problema 3" << endl;
		cout << "4. Fin" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            opcion1();
            break;
        case 2:
            opcion2();
            break;
        case 3:
            opcion3();
            break;
        case 4:
            break;
        default:
            cout << "Opcion incorrecta, ingrese nuevamente" << endl;
        }
        cout << endl;
    } while (opcion != 4);

    return 0;
}