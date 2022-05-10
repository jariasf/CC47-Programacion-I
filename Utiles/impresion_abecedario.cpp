#include <iostream>
using namespace std;

void imprimirLetrasMayusculas() {
    /*
    i = 0    letra = 'A' + i = 'A' + 0 = 65 = 'A'
    i = 1    letra = 'A' + i = 'A' + 1 = 66 = 'B'
    i = 2    letra = 'A' + i = 'A' + 2 = 67 = 'C'
    i = 3    letra = 'A' + i = 'A' + 2 = 68 = 'D'
    ...
    i = 25   letra = 'A' + i = 'A' + 25 = 90 = 'Z'
    */
    // Iteración inicia en 0
    for (int i = 0; i < 26; ++i) {
        char letra = (char)('A' + i);
        cout << letra << " ";
    }
    cout << endl;

    // Iteración inicia en 1
    for (int i = 1; i <= 26; ++i) {
        char letra = (char)('A' + i - 1);
        cout << letra << " ";
    }
    cout << endl;
}

int main() {
    imprimirLetrasMayusculas();
    return 0;
}