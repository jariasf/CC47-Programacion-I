#include <iostream>
using namespace std;

/*
return true -> entrada es valida
return false -> entrada es invalida
*/

bool esEntradaValida(int goles_local, int goles_visitante) {	
    bool condicion = (goles_local >= 0 && goles_visitante >= 0);
    return condicion;
    //return (goles_local >= 0 && goles_visitante >= 0);
}

bool esEntradaValida2(int goles_local, int goles_visitante) {
    // goles_local = 3, goles_visitante = 3
    if (goles_local < 0) {
        return false;
    }
    if (goles_visitante < 0) {
        return false;
    }
    return true;
}

bool esEntradaValida3(int goles_local, int goles_visitante) {
    // goles_local = 3, goles_visitante = 3
    // F || V = V
    // V || F = V
    // F || F = F
    if (goles_local < 0 || goles_visitante < 0) {
        return false;
    }
    return true;
}

void compararGoles(int goles_local, int goles_visitante) {
    if (goles_local > goles_visitante) {
        cout << "Gano el equipo local" << endl;
    }
    else if (goles_visitante > goles_local) {
        cout << "Gano el equipo visitante" << endl;
    }
    else if (goles_visitante == goles_local) {
        cout << "Ambos equipos empataron" << endl;
    }
    return;
}


int main() {	
    short goles_local, goles_visitante;

    cout << "Ingrese la cantidad de goles del equipo local: ";
    cin >> goles_local;
    cout << "Ingrese la cantidad de goles del equipo visitante: ";
    cin >> goles_visitante;

    // Debe validar que los goles sean valores mayores o iguales a cero
    // if( condicion )   condicion = true o false
    if ( esEntradaValida(goles_local, goles_visitante) ) {
        compararGoles(goles_local, goles_visitante);
    }
    else {
        cout << "El valor ingresado de goles es invalido"<<endl;
    }
    return 0;
}