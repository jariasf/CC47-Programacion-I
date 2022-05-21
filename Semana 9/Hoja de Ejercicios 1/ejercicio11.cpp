#include <iostream>
using namespace std;
/*
Implementar una función que devuelva el área y otra el perímetro de una circunferencia, dado
el radio.
*/
const double PI = 3.1415; // variable global

// area = PI * radio^2
double areaCircunferencia(double radio) {
    double area = PI * radio * radio;
    return area;
}

// perimetro = 2 * PI * radio
double perimetroCircunferencia(double radio) {
    double perimetro = 2 * PI * radio;
    return perimetro;
}

int main() {
    double radio;
    cout << "Ingrese el radio: ";
    cin >> radio;

    double area = areaCircunferencia(radio);
    cout << "El area de la circunferencia es " << area << endl;

    double perimetro = perimetroCircunferencia(radio);
    cout << "El perimetro de la circunferencia es " << perimetro << endl;

    return 0;
}