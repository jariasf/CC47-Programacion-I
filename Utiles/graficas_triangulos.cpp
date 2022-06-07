#include <iostream>
using namespace std;

void triangulo1(int n) {
    /*
    1
    12
    123
    1234
    12345
    */
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        cout << endl;
    }
}

void triangulo2(int n) {
    /*
    12345
    1234
    123
    12
    1
    */
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }
        cout << endl;
    }
}

void triangulo3(int n) {
    /*
    1
    21
    321
    4321
    54321
    */
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j >= 1; --j) {
            cout << j;
        }
        cout << endl;
    }
}

void triangulo4(int n) {
    /*
    54321
    4321
    321
    21
    1
    */
    for (int i = n; i >= 1; --i) {
        for (int j = i; j >= 1; --j) {
            cout << j;
        }
        cout << endl;
    }
}

void triangulo5(int n) {
    /*
    12345
    2345
    345
    45
    5
    */
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            cout << j;
        }
        cout << endl;
    }
}

void triangulo6(int n) {
    /*
    5
    45
    345
    2345
    12345
    */
    for (int i = n; i >= 1; --i) {
        for (int j = i; j <= n; ++j) {
            cout << j;
        }
        cout << endl;
    }
}

void triangulo7(int n) {
    /*
    54321
    5432
    543
    54
    5
    */
    for (int i = 1; i <= n; ++i) {
        for (int j = n; j >= i; --j) {
            cout << j;
        }
        cout << endl;
    }
}

void triangulo8(int n) {
    /*
    5
    54
    543
    5432
    54321
    */
    for (int i = n; i >= 1; --i) {
        for (int j = n; j >= i; --j) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    int n;
    do {
        cout << "Ingrese el valor de N: ";
        cin >> n;
    } while (n <= 0);
    cout << "Triangulo 1" << endl;
    triangulo1(n);
    cout << "\nTriangulo 2" << endl;
    triangulo2(n);
    cout << "\nTriangulo 3" << endl;
    triangulo3(n);
    cout << "\nTriangulo 4" << endl;
    triangulo4(n);
    cout << "\nTriangulo 5" << endl;
    triangulo5(n);
    cout << "\nTriangulo 6" << endl;
    triangulo6(n);
    cout << "\nTriangulo 7" << endl;
    triangulo7(n);
    cout << "\nTriangulo 8" << endl;
    triangulo8(n);

    return 0;
}