#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    HANDLE salida = GetStdHandle(STD_OUTPUT_HANDLE);

    // Colorear Texto
    SetConsoleTextAttribute(salida, FOREGROUND_RED);
    cout << "Texto en color rojo" << endl;
    SetConsoleTextAttribute(salida, FOREGROUND_GREEN);
    cout << "Texto en color verde" << endl;

    // Cambiar la posicion del cursor
    COORD c;
    c.X = 5;   // Columna
    c.Y = 10;  // Fila
    SetConsoleCursorPosition(salida, c);
    SetConsoleTextAttribute(salida, FOREGROUND_GREEN);
    cout << "Texto en color azul en posicion "<<c.X<<" "<<c.Y<< endl;
    cout << "Nuevo texto" << endl;
    return 0;
}