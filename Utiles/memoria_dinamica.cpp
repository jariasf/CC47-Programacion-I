#include <iostream>
using namespace std;

void ejercicio1() {
    int* x;
    x = new int;
    *x = 5;

    cout << "La direccion a la que apunta x es " << x << endl;
    cout << "El valor es " << *x << endl;

    delete x;
}

void ejercicio2() {
    float* a, * b;
    a = new float;
    b = new float;

    *a = 23.4;
    *b = 3.4;
    cout << "La suma de " << *a << " con " << *b << " es " << *a + *b << endl;

    delete a;
    delete b;
}

void ejercicio3() {
    int* a = new int;
    int* b = new int;

    cout << "Ingrese el primer numero: ";
    cin >> *a;
    cout << "Ingrese el segundo numero: ";
    cin >> *b;

    cout << "La suma es " << *a + *b << endl;
    cout << "La resta es " << *a - *b << endl;
    cout << "El producto es " << *a * *b << endl;

    delete a;
    delete b;
}

int main() {

    int* a = new int;

    if (a == NULL) {
        cout << "No se pudo asignar en la memoria" << endl;
    }
    else {
        cout << "Ingrese numero: ";
        cin >> *a;
        *a = *a + 5;
        cout << "El valor del incremento es " << *a << endl;
        delete a;
    }

    return 0;
}