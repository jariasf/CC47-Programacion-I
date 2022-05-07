#include <iostream>
using namespace std;

bool esNoticiaInvalida(char noticia) {
    if (noticia != 'd' && noticia != 'D' &&
        noticia != 'a' && noticia != 'A' &&
        noticia != 'e' && noticia != 'E' &&
        noticia != 'x' && noticia != 'X') {
        return true;
    }
    return false;
}

bool esNoticiaValida(char noticia) {
    if (noticia == 'D' || noticia == 'd' ||
        noticia == 'A' || noticia == 'a' ||
        noticia == 'E' || noticia == 'e' ||
        noticia == 'X' || noticia == 'x') {
        return true;
    }
    return false;
}

char ingresarNoticia() {
    /*
    D,d: Deportes; A,a: Actualidad; E,e: Entretenimiento; X,x: Fin de programa
    */
    char noticia;
    do {
        cout << "Ingrese tipo de noticia: ";
        cin >> noticia;
    } while ( esNoticiaInvalida(noticia) );
    return noticia;
}

int ingresarHora() {
    int hora;
    do {
        cout << "Hora de Publicacion: ";
        cin >> hora;
    } while ( hora < 0 || hora > 23 );
    return hora;
}

bool esOrigenInvalido(char origen) {
    if (origen != 'e' && origen != 'E' &&
        origen != 'n' && origen != 'N') {
        return true;
    }
    return false;
}

char ingresarOrigen() {
    char origen;
    do {
        cout << "Origen: ";
        cin >> origen;
    } while (esOrigenInvalido(origen));
    return origen;
}

void mostrarHoraMasFrecuente(int madrugada, int manhana, int tarde, int noche) {
    if (madrugada > manhana && madrugada > tarde && madrugada > noche) {
        cout << "En la MADRUGADA se publicaron más noticias" << endl;
    }
    else if (manhana > madrugada && manhana > tarde && manhana > noche) {
        cout << "En la MAÑANA se publicaron más noticias" << endl;
    }
    else if (tarde > madrugada && tarde > manhana && tarde > noche) {
        cout << "En la TARDE se publicaron más noticias" << endl;
    }
    else {
        cout << "En la NOCHE se publicaron más noticias" << endl;
    }
}

void mostrarTipoDeNoticiaMasFrecuente(int nacional, int extranjera) {
    if (nacional > extranjera) {
        cout << "Predominan las noticias Nacionales" << endl;
    }
    else if (extranjera > nacional) {
        cout << "Predominan las noticias del Extranjero" << endl;
    }
    else {
        cout << "Igual numero de noticias Nacionales y del Extranjero" << endl;
    }
}

int main() {
    char noticia, origen;
    int hora;
    // Variables de noticias
    int deportes = 0, entretenimiento = 0, actualidad = 0;
    // Variables de hora de publicacion
    int madrugada = 0, manhana = 0, tarde = 0, noche = 0;
    // Variables de origen
    int nacional = 0, extranjera = 0;

    noticia = ingresarNoticia(); // eE,aA,dD,xX
    while ( noticia != 'x' && noticia != 'X' ) {
        // eE,aA,dD
        hora = ingresarHora();
        origen = ingresarOrigen();

        // Resultados de noticia
        if (noticia == 'E' || noticia == 'e') {
            entretenimiento++;
        }
        else if (noticia == 'A' || noticia == 'a') {
            actualidad++;
        }
        else {
            deportes++;
        }

        // Resultados de hora de publicación
        //(madrugada (0 a 5); mañana (6 a 12); tarde (13 a 17); noche (18 a 23))
        if (hora >= 0 && hora <= 5) {
            madrugada++;
        }
        else if (hora >= 6 && hora <= 12) {
            manhana++;
        }
        else if (hora >= 13 && hora <= 17) {
            tarde++;
        }
        else {
            noche++;
        }

        // Resultados de origen
        if (origen == 'e' || origen == 'E') {
            extranjera++;
        }
        else {
            nacional++;
        }

        cout << endl;
        noticia = ingresarNoticia();
    }

    cout << "\nLos resultados son:" << endl;
    cout << "-----------------------" << endl;
    cout << "Noticias de Deporte: " << deportes << endl;
    cout << "Noticias de Actualidad: " << actualidad << endl;
    cout << "Noticias de Entretenimiento: " << entretenimiento << endl;
    mostrarHoraMasFrecuente(madrugada, manhana, tarde, noche);
    mostrarTipoDeNoticiaMasFrecuente(nacional, extranjera);
    /*
    Los resultados son:
    -----------------------
    Noticias de Deporte: 2
    Noticias de Actualidad: 0
    Noticias de Entretenimiento: 1
    En la TARDE se publicaron más noticias
    Predominan las noticias del Extranjero
    */

    return 0;
}