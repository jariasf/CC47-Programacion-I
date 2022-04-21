#include<iostream>
using namespace std;

int main() {
    double nota_final;
    cout << "Ingrese la nota final del alumno: ";
    cin >> nota_final;

    if( nota_final >= 0 && nota_final <= 20 ) {
        if ( nota_final < 12.5 ) {
            cout << "El alumno esta desaprobado" << endl; 
        }
        else {
            cout << "El alumno esta aprobado" << endl;
        }
    }
    else {
        cout << "La nota ingresada es invalida" << endl;
    }

    return 0;
}