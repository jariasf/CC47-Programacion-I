#include <iostream>
using namespace std;

int main() {

    int numero, n1, n2, n3, resultado1, resultado2, resultado3, resultado;
    bool es_especial, es_menor, es_igual, es_mayor;

    cout << "Ingrese un numero de 6 digitos: ";
    cin >> numero;

    // numero = 123456
    // n1 = 12, n2 = 34, n3 = 56
    n3 = numero % 100; // 56
    numero /= 100;     // 1234
    n2 = numero % 100; // 34
    n1 = numero / 100; // 12

    // n1 = 12, n2 = 34, n3 = 56
    // n1 + n3 = 12 + 56 = 68
    // 2 * n2 = 2 * 34 = 68
    es_especial = (n1 + n3 == 2 * n2); // verdadero cuando la condicion se cumple
	
    // n1 = 12, n2 = 34, n3 = 56
    // primer caso
    // n1 < n3 --- 12 < 56
    // n1 * n2 * n3
    es_menor = (n1 < n3);
    resultado1 = n1 * n2 * n3;

    // n1 = 23, n3 = 11
    // n1 > n3  
    // n1n3 -> 2311
    es_mayor = (n1 > n3);
    // 2311 = 2000 + 300 + 10 + 1
    // 2311 = 2300 + 11
    // 23 -> 23 * 100 = 2300 + 11 = 2311
    resultado2 = n1 * 100 + n3;

    // n1 = 24, n2 = 45, n3 = 24
    // n1 == n3  
    // n2
    es_igual = (n1 == n3);
    resultado3 = n2;

    // entrada = 124512
    // n1 = 12, n2 = 45, n3 = 12
    // es_menor = falso o 0
    // es_mayor = falso o 0
    // es_igual = verdadero o 1

    // resultado = 0 * resultado1 + 0 * resultado2 + 1 * resultado3;
    // resultado = 0 + 0 + resultado3 = resultado3
    resultado = es_menor * resultado1 + es_mayor * resultado2 + es_igual * resultado3;

    cout << "El numero ingresado es especial (0: No; 1: Si): " << es_especial << endl;
    cout << "El resultado de la operacion es: " << resultado << endl;

    return 0;
}