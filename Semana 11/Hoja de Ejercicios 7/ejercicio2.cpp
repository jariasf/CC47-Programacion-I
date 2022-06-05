#include <iostream>
#include <cmath>
using namespace std;

void areaVolumen(double arista, double &area, double &volumen) {
    area = arista * arista * sqrt(3.0);
    volumen = sqrt(2) / 12 * arista * arista * arista;
}

int main() {
    double arista, area, volumen;
    cout << "Ingrese el valor de la arista: ";
    cin >> arista;
    if (arista > 0) {
        areaVolumen(arista, area, volumen);
        cout << "El area es " << area << endl;
        cout << "El volumen es " << volumen << endl;
    }
    else {
        cout << "La arista ingresada es incorrecta" << endl;
    }
    return 0;
}