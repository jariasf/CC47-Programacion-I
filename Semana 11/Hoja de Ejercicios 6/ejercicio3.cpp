#include <iostream>
using namespace std;

int generar(int low, int up) {
    return low + rand() % (up - low + 1);
}

void generarYMostrar(int* puntajes, int n) {
    for (int i = 0; i < n; ++i) {
        puntajes[i] = generar(1, 4);
    }
    cout << "Puntajes generados" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Puntaje de docente " << i + 1 << ": " << puntajes[i] << endl;
    }
}

/*
Una función Lista_puntajes que emita un listado que muestre para cada puntaje (entre
1 y 4), la cantidad de docentes que calificaron con dicho valor la metodología.
*/
void listaPuntajes(int* puntajes, int n) {
    int puntaje1 = 0, puntaje2 = 0, puntaje3 = 0, puntaje4 = 0;
    for (int i = 0; i < n; ++i) {
        switch (puntajes[i]) {
        case 1: puntaje1++; break;
        case 2: puntaje2++; break;
        case 3: puntaje3++; break;
        case 4: puntaje4++; break;
        }
    }
    cout << "Cantidad de docentes que calificaron con 1: " << puntaje1 << endl;
    cout << "Cantidad de docentes que calificaron con 2: " << puntaje2 << endl;
    cout << "Cantidad de docentes que calificaron con 3: " << puntaje3 << endl;
    cout << "Cantidad de docentes que calificaron con 4: " << puntaje4 << endl;
}

void listaPuntajes2(int* puntajes, int n) {
    int* conteos = new int[5];
    for (int i = 0; i < 5; ++i)
        conteos[i] = 0;

    for (int i = 0; i < n; ++i) {
        // puntajes[i] = [1,4]
        conteos[puntajes[i]]++;
        // conteos[1]++;
        // conteos[2]++;
        // conteos[3]++;
        // conteos[4]++;
        // puntajes[i]: 
        // i = 0 -> puntajes[0]=2   -> conteos[2]++; -> conteos[puntajes[0]]++;
        // i = 1 -> puntajes[1]=3   -> conteos[3]++; -> conteos[puntajes[1]]++;
        // i = 2 -> puntajes[2]=1   -> conteos[1]++; -> conteos[puntajes[2]]++;
    }

    for (int i = 1; i <= 4; ++i) {
        cout << "Cantidad de docentes que calificaron con " << i << ": " << conteos[i] << endl;
    }
    delete[]conteos;
}

int mayorVotacion(int* puntajes, int n) {
    int* conteos = new int[5]{};
    for (int i = 0; i < n; ++i) {
        conteos[puntajes[i]]++;
    }

    int mayor = conteos[1];
    int puntaje_mayor = 1;
    for (int i = 2; i < 5; ++i) {
        if (mayor < conteos[i]) {
            mayor = conteos[i];
            puntaje_mayor = i;
        }
    }

    delete[]conteos;
    return puntaje_mayor;
}

int mayorVotacion2(int* puntajes, int n) {
    int* conteos = new int[5]{};
    for (int i = 0; i < n; ++i) {
        switch (puntajes[i]) {
        case 1: conteos[1]++; break;
        case 2: conteos[2]++; break;
        case 3: conteos[3]++; break;
        case 4: conteos[4]++; break;
        }
    }

    int mayor = conteos[1];
    int puntaje_mayor = 1;
    for (int i = 2; i < 5; ++i) {
        if (mayor < conteos[i]) {
            mayor = conteos[i];
            puntaje_mayor = i;
        }
    }

    delete[]conteos;
    return puntaje_mayor;
}


int main() {
    srand(time(NULL));
    int n = 30;
    int* puntajes = new int[n];

    generarYMostrar(puntajes, n);
    listaPuntajes2(puntajes, n);
    cout << "El puntaje que obtuvo la mayor puntuacion es " << mayorVotacion(puntajes, n) << endl;
    delete[]puntajes;
    return 0;
}