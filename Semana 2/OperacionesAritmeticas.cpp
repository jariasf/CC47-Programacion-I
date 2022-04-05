#include <iostream>
using namespace std;

int main() {

	int x = 20, y = 30;
	
	// Operaciones Aritméticas
	cout << "La suma es: " << x + y << endl;
	cout << "La resta es: " << x - y << endl;
	cout << "El producto es: " << x * y << endl;
	cout << "La división es: " << x / y << endl;
	cout << "El resto es: " << x % y << endl;

	// División convirtiendo tipos de datos
	cout << "Conversión explícita (typecasting): " << (double)x / y << endl;
	double z = 20.0;
	cout << "Conversión implícita: " << z / y << endl;

	// Operaciones con caracteres
	char a = 'a';
	cout << "Caracter actual: " << a << ", siguiente caracter: " << a + 1 << endl;
	return 0;
}