#include <iostream>
using namespace std;

void incrementarPorValor(int a) {
    a = a + 1;
}

void incrementarPorReferenciaPuntero(int* p) {
   *p = *p + 1;
}

void incrementarPorReferenciaValor(int &a) {
    a = a + 1;
}

void incrementarValorConVariableReferencia(int &x, float &y, char &c) {
    x = x + 1;
    y = y * 2;
    c = 'F';
}

void prueba(int a, float &b, char c, int &d) {
    d = d - 1;
    a = a + 1;
    b = b * 5;
    c = 'T';
}

///// Llamar cualquiera de estas funciones en main para probarlas /////
void parametrosPorValor() {
    // Incrementar el valor dentro de una función usando paso por valor
    cout << "Paso por Valor" << endl;
    cout << "--------------" << endl;
    int a = 20;
    cout << "El valor inicial de a es " << a << endl;
    incrementarPorValor(a); // Se copia el valor de a en el parámetro de la función
    cout << "El valor de a luego de llamar a la funcion es " << a << endl;
    cout << endl;
}

void parametrosPorReferenciaPunteros() {
    // Incrementar el valor de a usando punteros como parámetros
    cout << "Paso por Referencia usando punteros" << endl;
    cout << "--------------" << endl;
    int a = 20;
    cout << "El valor inicial de a es " << a << endl;
    incrementarPorReferenciaPuntero(&a); // int *p = &a;
    cout << "El valor de a luego de llamar a la funcion es " << a << endl;
    cout << endl;
}

void variablesDeReferencia(){
    // Ejemplo del uso de variables de referencia
    cout << "Ejemplo de variables de referencia" << endl;
    cout << "-------------------------" << endl;

    int a = 20;
    cout << "El valor inicial de a es " << a << endl;

    // Declaración de variables de referencia
    int& variable_referencia = a;

    // Si cambiamos el valor de la variable de referencia, también
    // cambia el valor de la variable asignada
    variable_referencia++;	
    cout << "El valor de a luego de aumentar la variable de referencia es " << a << endl;

    // Declaramos otros tipos de variable
    float f = 2.5;
    char c = 'A';
    cout << "El valor de a es " << a << endl;
    cout << "El valor de f es " << f << endl;
    cout << "El valor de c es " << c << endl;

	// Aumentamos el valor de todas las variables usando paso por referencia
    incrementarValorConVariableReferencia(a, f, c);
    cout << "El valor de a luego de llamar a la funcion es " << a << endl;
    cout << "El valor de f luego de llamar a la funcion es " << f << endl;
    cout << "El valor de c luego de llamar a la funcion es " << c << endl;
    cout << endl;
}

void parametrosPorReferenciaVariables() {
    // Incrementar el valor usando variable de referencia
    cout << "Paso por Referencia usando variables" << endl;
    cout << "---------------------" << endl;
    int a = 20;
    cout << "El valor inicial de a es " << a << endl;
    incrementarPorReferenciaValor(a);  // int &x = a;
    cout << "El valor de a luego de llamar a la funcion es " << a << endl;
    cout << endl;
}

void ejemploPasoPorValorYReferencia() {
    // Ejemplo de paso por valor y referencia en una misma función
    cout << "Ejemplo de paso por valor y referencia" << endl;
    cout << "---------------------" << endl;

    int a = 20;
    float f = 10;
    char c = 'H';
    int m = 40;
    cout << "El valor de a es " << a << endl;
    cout << "El valor de f es " << f << endl;
    cout << "El valor de c es " << c << endl;
    cout << "El valor de m es " << m << endl;

    // (int a, float &b, char c, int &d)
    prueba(a, f, c, m);

    cout << "El valor de a luego de llamar a la funcion es " << a << endl;
    cout << "El valor de f luego de llamar a la funcion es " << f << endl;
    cout << "El valor de c luego de llamar a la funcion es " << c << endl;
    cout << "El valor de m luego de llamar a la funcion es " << m << endl;
    cout << endl;
}

int main() {	
    parametrosPorValor();
    parametrosPorReferenciaPunteros();
    variablesDeReferencia();
    parametrosPorReferenciaVariables();
    ejemploPasoPorValorYReferencia();
    return 0;
}