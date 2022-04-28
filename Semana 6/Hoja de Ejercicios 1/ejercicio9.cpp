#include <iostream>
using namespace std;

int main() {
    int numero, contador = 0, mayor, menor, positivos = 0, negativos = 0;
	while (true) {
        cout << "Ingrese un numero: ";
        cin >> numero;
        if (numero == 0) {
            break;
        }
        contador++;
        // numeros validos diferentes de 0
        // 23  --- mayor = 23, menor = 23
        if (contador == 1) {
            mayor = numero;
            menor = numero;
        }
        else {
            // mayor = 23
            // ingresamos 45
            // mayor = 45
            if (mayor < numero) {
                mayor = numero;
            }

            // menor = 23
            // ingresamos -12
            // menor = -12
            if (menor > numero) {
                menor = numero;
            }
        }

        if (numero > 0) {
            positivos++;
        }
        else {
            negativos++;
        }
    }

    cout << "Numeros Leidos = " << contador << endl;
    if (contador != 0) {
        cout << "Numero Mayor = " << mayor << endl;
        cout << "Numero Menor = " << menor << endl;
    }
    cout << "Numeros Positivos = " << positivos << endl;
    cout << "Numeros Negativos = " << negativos << endl;
    return 0;
}