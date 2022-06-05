#include <iostream>
using namespace std;

/*
a) Una función Generar_y_MostrarDatos, que permita generar aleatoriamente los
puntajes de las 40 personas en el vector Vpuntajes y los muestre.
*/
int generar(int low, int up) {
    return low + rand() % (up - low + 1);
}

void generarYMostrarDatos(char* puntajes, int n) {
    /*
    A -> 65
    B -> 66
    C -> 67
    D -> 68
    ...
    Z ->

    a -> 95
    b -> 96
    c -> 97
    */
    //int x = 'A'; //65
    //char c = 65; //'A'

    for (int i = 0; i < n; ++i) {
        puntajes[i] = generar('A', 'C');
    }

    cout << "Puntajes" << endl;
    for (int i = 0; i < n; ++i ) {
        cout << "Puntaje " << i + 1 << ": " << puntajes[i] << endl;
    }
}

/*
b) Una función Lista_puntajes que emita un listado que muestre para cada puntaje(A, B, C)
la cantidad de personas que calificaron con dicho puntaje.
*/
void listaPuntajes(char *puntajes, int n) {
    int puntajeA = 0, puntajeB = 0, puntajeC = 0;
    for (int i = 0; i < n; ++i) {
        switch (puntajes[i]) {
            case 'A': puntajeA++; break;
            case 'B': puntajeB++; break;
            case 'C': puntajeC++; break;
        }
    }
    cout << "Cantidad de personas que calificaron con A: " << puntajeA << endl;
    cout << "Cantidad de personas que calificaron con B: " << puntajeB << endl;
    cout << "Cantidad de personas que calificaron con C: " << puntajeC << endl;
}

int letraMayusculaAEntero(char letra) {
    return letra - 'A';
    /*
    letra = 'A' -> 'A' - 'A' = 65 - 65 = 0
    letra = 'B' -> 'B' - 'A' = 66 - 65 = 1
    letra = 'C' -> 'C' - 'A' = 67 - 65 = 2
    ...
    letra = 'Z' -> 'Z' - 'A' = 90 - 65 = 25
    */
}

void listaPuntajes2(char *puntajes, int n) {
    int* conteos = new int[3]{};
    /*
    conteos[0] -> 'A' -> 0
    conteos[1] -> 'B' -> 1
    conteos[2] -> 'C' -> 2
    'A' -> 0
    'B' -> 1
    'C' -> 2
    'D' -> 3
    'E' -> 4
    'Z' -> 25
    */
    for (int i = 0; i < n; ++i) {
        // puntajes[i] -> 'A', 'B', 'C'
        int indice = letraMayusculaAEntero(puntajes[i]);
        // indice -> 0, 1, 2
        conteos[indice]++;
    }

    for (char i = 'A'; i <= 'C'; ++i) {
        int indice = letraMayusculaAEntero(i);
        cout << "Cantidad de personas que calificaron con " << i << ": " << conteos[indice] << endl;
    }
    delete[]conteos;
}

/*
c) Una función Sabor_aprobado, que determine si el nuevo sabor fue aprobado o no. Para
determinar que el nuevo sabor fue aprobado se debe cumplir que la cantidad de personas
que calificaron como excelente A sea mayor al 50% del total de encuestados.
*/
bool saborAprobado(char *puntajes, int n) {
    int excelente = 0;
    for (int i = 0; i < n; ++i) {
        if (puntajes[i] == 'A') {
            excelente++;
        }
    }

    if (excelente > n/2.0 ) {
        return true;
    }
    return false;
}


/*
La función principal main que haciendo uso de las funciones anteriores permita generar
e imprimir el vector puntajes, determine y muestre para cada puntaje, la cantidad de
personas que calificaron con dicho puntaje, que determine y muestre si el nuevo sabor
fue aprobado o no.
*/
int main() {
    srand(time(NULL));
    int n = 40;
    char* puntajes = new char[n];
    generarYMostrarDatos(puntajes, n);
    listaPuntajes(puntajes, n);
    if (saborAprobado(puntajes, n)) {
        cout << "El nuevo sabor fue aprobado" << endl;
    }
    else {
        cout << "El nuevo sabor no fue aprobado" << endl;
    }
    delete[]puntajes;
    return 0;
}