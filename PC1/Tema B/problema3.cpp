#include <iostream>
using namespace std;

int main() {

    char marca, categoria;
    int hora;
    cout << "Marca (P: PlayStation 5; N: Nintendo Switch; X: Xbox One): ";
    cin >> marca;
    cout << "Categoría (C: Consola; J: Juego): ";
    cin >> categoria;
    cout << "Hora en la que realiza la compra: ";
    cin >> hora;

    bool es_PC = (marca == 'P' && categoria == 'C');
    bool es_PJ = (marca == 'P' && categoria == 'J');
    bool es_NC = (marca == 'N' && categoria == 'C');
    bool es_NJ = (marca == 'N' && categoria == 'J');
    bool es_XC = (marca == 'X' && categoria == 'C');
    bool es_XJ = (marca == 'X' && categoria == 'J');

    double precio = es_PC * 3700.5 + es_PJ * 230 + es_NC * 2300.5 + es_NJ * 200 + es_XC * 3000.5 + es_XJ * 250;

    bool de_0_8 = (hora >= 0 && hora <= 8);
    bool de_9_19 = (hora >= 9 && hora <= 19);
    bool de_20_23 = (hora >= 20 && hora <= 23);

    double incremento = de_0_8 * 0.17 + de_9_19 * 0.12 + de_20_23 * 0.05;

    precio = precio + precio * incremento;

    cout << "Precio final del accesorio: " << precio << endl;

    return 0;
}

