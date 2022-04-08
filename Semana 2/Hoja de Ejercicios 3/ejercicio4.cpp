#include <iostream>
using namespace std;

int main() {
    int sobres, empaques50, empaques30, empaques12, sobrantes;

    cout << "Ingrese la cantidad de sobres: ";
    cin >> sobres;

    empaques50 = sobres / 50;
    sobres %= 50; // sobres = sobres % 50;
    empaques30 = sobres / 30;
    sobres %= 30;
    empaques12 = sobres / 12;
    sobrantes = sobres % 12;

    cout << "Cantidad de empaques de 50: " << empaques50 << endl;
    cout << "Cantidad de empaques de 30: " << empaques30 << endl;
    cout << "Cantidad de empaques de 12: " << empaques12 << endl;
    cout << "Sobres sin empaquetar: " << sobrantes << endl;

    return 0;
}