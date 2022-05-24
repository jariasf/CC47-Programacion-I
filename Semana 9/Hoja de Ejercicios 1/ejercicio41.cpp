#include <iostream>
#include <iomanip>

using namespace std;
/*
n = 10;
i = 1, 2, 3, 4, 5, 6 ,7 ,8, 9, 10
j = 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
*/
void imprimirTablaMultiplicar(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
		    cout<<setw(4)<< i * j;
        }
        cout << endl;
    }
}

int main() {
    int n;
    do {
        cout << "Ingrese numero: ";
        cin >> n;
    } while (n <= 0);
    imprimirTablaMultiplicar(n);
	return 0;
}