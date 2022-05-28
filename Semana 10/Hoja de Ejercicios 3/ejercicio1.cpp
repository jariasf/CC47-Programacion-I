#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

void opcion1() {

}

int digit(int pos, int num) {
    if (num == 0 && pos == 0) // edge case
        return 0;
    num /= pow(10, pos);     // num = 23456, pos = 3 --> num/1000 = 23
    if (num == 0)
        return -1;
    if (num < 0)
        num = -num;
    return num % 10;        // 23 % 10 = 3
}

void opcion2() {
    int n;
    do {
        cout << "Ingrese el valor de N: ";
        cin >> n;
    } while (n < 0);

    int num;
    //[-99, 99] dos digitos  (-100 >= num || num >= 100)
    //[-999, 999] tres digitos (-1000 >= num || num >= 1000)
    int invalid_num = 1e8;
    do {
        cout << "Ingrese el numero: ";
        cin >> num;
    } while ( -invalid_num >= num || num >= invalid_num );

    cout << "El n-ésimo dígito es: " << digit(n, num)<<endl;
}

void pruebaDigit() {
    assert(digit(0,456) == 6);
    assert(digit(1,456) == 5);
    assert(digit(2,456) == 4);
    assert(digit(3,456) == -1);
    assert(digit(4,456) == -1);
    assert(digit(0,-456) == 6);
    assert(digit(1,-456) == 5);
    assert(digit(2,-456) == 4);
    assert(digit(3,-456) == -1);
    assert(digit(4,-456) == -1);
    cout << "El metodo digit funciona correctamente" << endl;
    system("pause");
}


int main() {
    pruebaDigit();

    int opcion;
    do {
        cout << "Menu de opciones" << endl;
        cout << "1. Calcular el seno" << endl;
        cout << "2. Hallar el enesimo digito" << endl;
        cout << "3. Fin" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            opcion1();
            break;
        case 2:
            //opcion2();
            break;
        case 3:
            break;
        default:
            cout << "Opcion incorrecta" << endl;
        }
        system("pause");
        cout << endl;
    } while (opcion != 3);
}