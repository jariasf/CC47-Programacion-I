#include <iostream>
using namespace std;

int generarNumerosEnRango(int low, int up) {
    return low + rand() % (up - low + 1);
}

char generarLetraMinusculaAleatoria() {
    return 'a' + rand() % 26;
}

char generarLetraMayusculaAleatoria() {
    return 'A' + rand() % 26;
}

int main() {
    srand(time(NULL));
    cout << "Numeros generados aleatoriamente" << endl;
    for (int i = 0; i < 10; ++i) {
        cout<<"Numero "<<i+1<<": " << generarNumerosEnRango(1, 100) << endl;
    }

    cout << "\nLetras minusculas generadas aleatoriamente" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Letra minuscula " << i + 1 << ": " << generarLetraMinusculaAleatoria()<<endl;
    }

    cout << "\nLetras mayusculas generadas aleatoriamente" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Letra mayuscula " << i + 1 << ": " << generarLetraMayusculaAleatoria() << endl;
    }
    return 0;
}