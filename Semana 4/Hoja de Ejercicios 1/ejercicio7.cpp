#include <iostream>
using namespace std;

int main() {

    int N1, N2;
    cout << "Ingrese dos numeros enteros (N1 N2): ";
    cin >> N1 >> N2;
    if (N1 % N2 == 0) {
        cout << N1 << " es multiplo de " << N2 << endl;
    }
    else {
        cout << N1 << " no es multiplo de " << N2 << endl;
    }

    return 0;
}