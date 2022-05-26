#include<iostream>
using namespace std;

int factorial(int n) {
    int producto = 1;
    for (int i = 1; i <= n; ++i) {
        producto *= i;
    }
    return producto;
}

void opcion1() {
    /*
    Una función Factorial, que teniendo como parámetro un número positivo nos determine 
    el factorial de dicho número.
    */
    int numero;
    do {
        cout << "Ingrese el valor de N: ";
        cin >> numero;
    } while (numero <= 0 || numero > 10);

    int resultado = factorial(numero);
    cout << "El factorial de " << numero << " es " << resultado << endl;
}

double exponencial(int k, double a) {
     /*
    e^a = 1 + a + a^2/2! + a^3/3! ... a^k/k!
    */
    double suma = 1., potencia = a;
    for (int i = 1; i <= k; ++i) {
        suma += potencia / factorial(i);
        potencia *= a;
    }
    return suma;
}

void opcion2() {
    int k;
    double a;
    do {
        cout << "Ingresar el valor k: ";
        cin >> k;
    } while (k <= 0 || k > 20);
    cin >> a;

    double exp = exponencial(k, a);
    cout << "El exponencial de e^a es " << exp << endl;
}

void opcion3() {
	
}


int main() {

    int opcion;
    do {
        cout << "\t\t\tMENU PRINCIPAL" << endl;
        cout << "1. Determinar el factorial de un numero" << endl;
        cout << "2. Calcular el valor de e^a" << endl;
        cout << "3. Imprime rombo" << endl;
        cout << "4. Fin" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                opcion1();
                break;
            case 2:
                opcion2();
                break;
            case 3:
                opcion3();
                break;
            case 4:
                break;
            default:
                cout << "Opcion incorrecta, ingrese nuevamente" << endl;
        }
        system("pause");
        cout << endl;
    } while (opcion != 4);

    return 0;
}