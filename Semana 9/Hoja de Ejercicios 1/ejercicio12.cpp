#include <iostream>
using namespace std;
/*
Implementar una funci�n que devuelva el �rea y per�metro de una circunferencia, dado el radio.
S�lo puede utilizar una funci�n.
*/
const double PI = 3.1415; // variable global

// area = PI * radio^2
// perimetro = 2 * PI * radio
void areaYPerimetroCircunferencia(double radio, double &area, double &perimetro) {
    area = PI * radio * radio;
    perimetro = 2 * PI * radio;
}

int main() {
    double radio;
    cout << "Ingrese el radio: ";
    cin >> radio;

    double area, perimetro;
    areaYPerimetroCircunferencia(radio, area, perimetro);
    cout << "El area de la circunferencia es " << area << endl;
    cout << "El perimetro de la circunferencia es " << perimetro << endl;
    return 0;
}