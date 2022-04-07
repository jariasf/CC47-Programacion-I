#include <iostream>
using namespace std;

int main() {
    char caracter;
    cout << "Ingrese un caracter: ";
    cin >> caracter;

    // 'A' = 65;
    // 'B' = 66;
    // 'C' = 67;	
    char segundo = caracter + 1;
    char tercero = caracter + 2;
    char cuarto = caracter + 3;

    cout << "Las letras que le siguen a " << caracter << " son: ";
    cout << segundo << tercero << cuarto << endl;

    // jerarquia -> bool, caracter, int, long long, float, double
    //cout << "Las letras que le siguen a " << caracter << " son: ";
    // Solución usando typecasting
    //cout << (char)(caracter + 1) << (char)(caracter + 2) << (char)(caracter + 3) << endl;
	return 0;
}