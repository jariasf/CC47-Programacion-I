#include <iostream>
using namespace std;

int main() {

    char marca, categoria;
    short hora;	
    bool es_RT, es_RM, es_LT, es_LM, es_HT, es_HM, es_hora1, es_hora2, es_hora3;
    double precio, incremento;

    cout << "Marca (R: Razer; L: Logitech; H: HyperX): ";
    cin >> marca;
    cout << "Categoría (T: Teclado; M: Mouse): ";
    cin >> categoria;
    cout << "Hora en la que realiza la compra: ";
    cin >> hora;

    // tabla 1
    es_RT = (marca == 'R' && categoria == 'T');
    es_RM = (marca == 'R' && categoria == 'M');
    es_LT = (marca == 'L' && categoria == 'T');
    es_LM = (marca == 'L' && categoria == 'M');
    es_HT = (marca == 'H' && categoria == 'T');
    es_HM = (marca == 'H' && categoria == 'M');
    precio = es_RT * 480.5 + es_RM * 350 + es_LT * 550 + es_LM * 300.5 + es_HT * 680 + es_HM * 375.5;

    // tabla 2
    es_hora1 = (hora >= 0 && hora <= 8);
    es_hora2 = (hora >= 9 && hora <= 19);
    es_hora3 = (hora >= 20 && hora <= 23);
    incremento = es_hora1 * 0.15 + es_hora2 * 0.1 + es_hora3 * 0.07;

    // resultado final
    precio = precio + precio * incremento;
    cout << "Precio final del accesorio: " << precio << endl;

    return 0;
}