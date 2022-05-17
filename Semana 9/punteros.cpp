#include <iostream>
using namespace std;

int main() {
    int a = 45;
    cout << "El valor de a es " << a << endl;
    cout << "Direccion de a " << &a << endl;

    int* p = &a; // direccion de memoria
    cout << "El valor de p " << p << endl;
    cout << "El contenido de la direccion " << p << " es " << *p << endl;

    a = a + 1;  // aumentamos en 1
    cout << "El nuevo valor de a es " << a << endl;
    cout << "El valor de a usando el puntero es " << *p << endl;

	// Dereferencing - dereferenciar
    *p = *p + 1; // aumentamos en 1 usando punteros
    cout << "El nuevo valor de a es " << a << endl;
    cout << "El valor de a usando el puntero es " << *p << endl;

    float c = 2.13;
    float* pc = &c;
    cout << "El valor de c es " << c << endl;
    cout << "Direccion de c " << &c << endl;
    cout << "El valor de c usando el puntero es " << *pc << endl;
    return 0;
}