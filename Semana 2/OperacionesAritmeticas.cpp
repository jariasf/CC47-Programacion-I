#include <iostream>
using namespace std;

int main() {

	int x = 20, y = 30;
	
	// Operaciones Aritm�ticas
	cout << "La suma es: " << x + y << endl;
	cout << "La resta es: " << x - y << endl;
	cout << "El producto es: " << x * y << endl;
	cout << "La divisi�n es: " << x / y << endl;
	cout << "El resto es: " << x % y << endl;

	// Divisi�n convirtiendo tipos de datos
	cout << "Conversi�n expl�cita (typecasting): " << (double)x / y << endl;
	double z = 20.0;
	cout << "Conversi�n impl�cita: " << z / y << endl;

	// Operaciones con caracteres
	char a = 'a';
	cout << "Caracter actual: " << a << ", siguiente caracter: " << a + 1 << endl;
	return 0;
}