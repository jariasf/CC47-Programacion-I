#include <iostream>
using namespace std;

void intercambiar(int &x, int &y) {
    int tmp = x;
    x = y;
    y = tmp;
}

void intercambiarEnC(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main() {
    int x, y;
    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;
	
    intercambiar(x, y);

    cout << "El valor de x es " << x << endl;
    cout << "El valor de y es " << y << endl;
    return 0;
}