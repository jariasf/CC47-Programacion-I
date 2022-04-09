#include <iostream>
using namespace std;

int main() {
    short anios;
    char estudios;
    short puntaje_labor, puntaje_estudios, puntaje_total;
    bool es_menor5, es_mayor5, primario, secundario, universitario, posgrado;

    cout << "Ingrese la cantidad de años que labora: ";
    cin >> anios;
    cout << "Estudios(P: primaria; S: secundaria; U: universitario; G: posgrado) : ";
    cin >> estudios;

    // anios
    es_menor5 = (anios < 5);
    es_mayor5 = (anios >= 5);
    puntaje_labor = es_menor5 * 5 + es_mayor5 * 10;

    // estudios
    primario      = (estudios == 'P');
    secundario    = (estudios == 'S');
    universitario = (estudios == 'U');
    posgrado      = (estudios == 'G');
    puntaje_estudios = primario * 5 + secundario * 10 + universitario * 20 + posgrado * 30;

    // puntaje total
    puntaje_total = puntaje_labor + puntaje_estudios;

    cout << "Puntaje Obtenido: " << puntaje_total << endl;

    return 0;
}