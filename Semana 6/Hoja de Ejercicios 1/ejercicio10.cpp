#include <iostream>
using namespace std;

void adivinarNumero(int numero_aleatorio) {
    int numero, intento = 1;
    do {
        cout << "Intento " << intento << " - Ingrese N: ";
        cin >> numero;
        
        if (numero_aleatorio < numero) {
            cout << "El numero es menor" << endl;
        }
        else if (numero_aleatorio > numero) {
            cout << "El numero es mayor" << endl;
        }
        else {
            switch (intento) {
                case 1:
                case 2: 
                case 3: cout << "Fue pura suerte!!" << endl; break;
                case 4:
                case 5:
                case 6: cout << "Eres bueno!" << endl; break;
                case 7: cout << "No esta mal" << endl; break;
                case 8: cout << "Se puede mejorar" << endl; break;
                default: cout << "Que mal estas!!!!" << endl; break;
            }
        }
        intento++;
    } while ( numero != numero_aleatorio && intento <= 12 );

    if (intento > 12) {
        cout << "Superaste el numero de intentos permitidos" << endl;
    }
}

int main() {
    srand(time(NULL));
    int numero_aleatorio = rand() % 100;
    adivinarNumero(numero_aleatorio);
    return 0;
}