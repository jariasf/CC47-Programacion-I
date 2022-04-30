#include <iostream>
using namespace std;

bool esCaracterInvalido(char caracter) {
    if (caracter != 'a' && caracter != 'A' &&
        caracter != 'm' && caracter != 'M' &&
        caracter != 'q' && caracter != 'Q') {
        return true;
    }
    return false;
}

char ingresarCaracter() {
    /*
        Este es un ejemplo de como ingresar caracteres
        Consideremos como validos los caracteres a,A,m,M,q,Q
        Todos los demas caracteres seran invalidos
    */
    char caracter;
    do {
        cout << "Ingrese un caracter: ";
        cin >> caracter;
    } while (esCaracterInvalido(caracter));
    return caracter;
}

int ingresarNumero() {
    /*
        Este es un ejemplo de como ingresar numeros
        Consideremos como validos los numeros entre 1 y 15
        Todos los demas numeros son invalidos
    */
    int numero;
    do {
        cout << "Ingrese numero: ";
        cin >> numero;
    } while (numero < 1 || numero > 15);
    return numero;
}

bool condicionParada(char caracter) {
    if (caracter == 'q' || caracter == 'Q') {
        return true;
    }
    return false;
}

void tipoIngresoUsandoWhile() {
    /*
        Ejemplo de ingreso usando while sin break
        Como caso ejemplo, se ingresara un caracter
        Que puede ser a,A,m,M. Si el usuario ingresa
        q o Q se termina la ejecucion
    */
    char caracter = ingresarCaracter();
    int numero;
    while (!condicionParada(caracter)) { // mientras no se cumpla la condicion de parada
        numero = ingresarNumero();
        cout << "Aqui vienen bloques de instrucciones" << endl;
        cout << "Se hace uso del numero " << numero << " y caracter " << caracter << endl;
        cout << endl;
        caracter = ingresarCaracter();
    }
    cout << "\nLos resultados se muestran aqui" << endl;
}


void tipoIngresoUsandoWhileBreak() {
    /*
        Ejemplo de ingreso usando while y break
        Como caso ejemplo, se ingresara un caracter
        Que puede ser a,A,m,M. Si el usuario ingresa
        q o Q se termina la ejecucion
    */
    char caracter;
    int numero;
    while (true) {
        caracter = ingresarCaracter();
        if (condicionParada(caracter)) {
            // Si se cumple la condicion de parada, es decir,
            // Si se ingreso caracter que termina la ejecucion del bucle
            break;
        }
        numero = ingresarNumero();

        cout << "Aqui vienen bloques de instrucciones" << endl;
        cout << "Se hace uso del numero " << numero << " y caracter " << caracter << endl;
        cout << endl;
    }
    cout << "\nLos resultados se muestran aqui" << endl;
}


void tipoIngresoUsandoDoWhile() {
    /*
        Ejemplo de ingreso usando do-while
        Como caso ejemplo, se ingresara un caracter
        Que puede ser a,A,m,M. Si el usuario ingresa
        q o Q se termina la ejecucion
    */
    char caracter;
    int numero;
    do {
        caracter = ingresarCaracter();
        if (condicionParada(caracter) == false) {
            // Para casos validos realizamos la ejecucion
            numero = ingresarNumero();
            cout << "Aqui vienen bloques de instrucciones" << endl;
            cout << "Se hace uso del numero " << numero << " y caracter " << caracter << endl;
            cout << endl;
        }
    } while (!condicionParada(caracter));

    cout << "\nLos resultados se muestran aqui" << endl;
}

int main() {
    tipoIngresoUsandoWhile();
    //tipoIngresoUsandoWhileBreak();
    //tipoIngresoUsandoDoWhile();
    return 0;
}