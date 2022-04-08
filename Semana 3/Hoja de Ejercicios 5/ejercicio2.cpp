#include <iostream>
using namespace std;

int main() {
    short mes;
    cout << "Ingrese el mes: ";
    cin >> mes;

    bool es_febrero = (mes == 2);
    bool tiene_30_dias = (mes == 4 || mes == 6 || mes == 9 || mes == 11);
    bool tiene_31_dias = (!es_febrero && !tiene_30_dias);
    short numero_dias = es_febrero * 28 + tiene_30_dias * 30 + tiene_31_dias * 31;

    cout << "El mes " << mes << " tiene " << numero_dias << endl;

    return 0;
}