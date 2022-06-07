#include <iostream>
using namespace std;

void espacios(int n) {
    for (int i = 0; i < n; ++i)
        cout << " ";
}

void graficar1(int n) {
    for (int i = n; i >= 1; --i) {
        espacios(i - 1);
        for (int j = i; j <= n; ++j) {
            cout << i;
        }
        cout << endl;
    }
}

void graficar2(int n) {
    for (int i = n; i >= 1; --i) {
        espacios(i - 1);
        for (int j = i; j <= n; ++j) {
            cout << j;
        }

        for (int j = n - 1; j >= i; --j) {
            cout << j;
        }
        cout << endl;
    }
}

void graficar3(int n) {
    for (int i = 1; i <= n; ++i) {
        espacios(i - 1);
        for (int j = i; j <= n; ++j) {
            cout << j;
        }

        for (int j = n - 1; j >= i; --j) {
            cout << j;
        }
        cout << endl;
    }
}

char enteroAMayuscula(int i) {
    // i debe iniciar en 0
    return i + 'A';
}

void graficar(int n) {
    /*
    ABCDE
    ABCDE
    ABCDE
    ABCDE
    ABCDE
    A = 65
    B = 66 = 'A' + 1
    C = 67 = 'A' + 2
    D = 68 = 'A' + 3
    E = 69
    ...
    Z = 90

    val = 0 -> 'A' = 'A' + 0
    val = 1 -> 'B' = 'A' + 1
    val = 2 -> 'C' = 'A' + 2
    val = 3 -> 'D' = 'A' + 3
    val = 4 -> 'E' = 'A' + 4
    ...
    val = 25 -> 'Z'
    */
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << enteroAMayuscula(j);
        }
        cout << endl;
    }
}

void graficar5(int n) {
    /*
    ABCDE
    ABCDE
    ABCDE
    ABCDE
    ABCDE
    A = 65
    B = 66
    C = 67
    D = 68
    E = 69
    ...
    Z = 90
    */
    char c;
    for (int i = 1; i <= n; ++i) {
        c = 'A';
        for (int j = 1; j <= n; ++j) {  
            cout << c;
            c++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    do {
        cout << "Ingrese el valor de N: ";
        cin >> n;
    } while ( n <= 0 );
    graficar(n);
    return 0;
}