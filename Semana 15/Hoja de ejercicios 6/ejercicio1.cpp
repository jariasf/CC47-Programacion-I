#include <iostream>
#include <conio.h>
using namespace std;

int digitos_validos[3] = {0, 2, 5};

int nextInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

void generarMensaje(int *mensaje, int n) {
    for (int i = 0; i < n; ++i) {
	    // El mensaje solo debe tener los dígitos 0, 2 y 5.
	    mensaje[i] = digitos_validos[nextInt(0, 2)];
    }
}

void imprimirMensaje(int* mensaje, int n) {
    cout << "\nMensaje" << endl;
    for (int i = 0; i < n; ++i) {
        cout << mensaje[i] << " ";
    }
    cout << endl;
}

bool personasTienenFrio(int* mensaje, int n) {
    // Si se encuentra 252 al inicio del mensaje significa que las personas tienen frio
    if (mensaje[0] == 2 && mensaje[1] == 5 && mensaje[2] == 2)
        return true;
    return false;
}

bool personasTienenCalor(int* mensaje, int n) {
    // Si se encuentra 202 en forma alternada significa que las personas tienen calor
    for (int i = 0; i < n; ++i) {
        // Primero verificamos que estamos en posiciones válidas
        if (i + 2 < n && i + 4 < n) {
            // Luego podemos acceder a esas posiciones que garantizamos son válidas
            if (mensaje[i] == 2 && mensaje[i + 2] == 0 && mensaje[i + 4] == 2) {
                return true;
            }
        }
    }
    return false;
}

bool personasTienenCalor2(int* mensaje, int n) {
    // Si se encuentra 202 en forma alternada significa que las personas tienen calor
    for (int i = 0; i <= n - 5; ++i) {
        // Luego podemos acceder a esas posiciones que garantizamos son válidas
        if (mensaje[i] == 2 && mensaje[i + 2] == 0 && mensaje[i + 4] == 2) {
            return true;
        }
    }
    return false;
}

bool personasTienenHambre(int *mensaje, int n) {
    // Si se encuentra 502 al final del mensaje significa que las personas tienen hambre
    // n = 11
    // Ultima posicion -> a[n - 1] = a[10]
    // Penultima -> a[n - 2] = a[9]
    // Antepenultima -> a[n - 3] = a[8]

    // Paso de verificación de posiciones
    //if( n - 3 >= 0 && n - 2 >= 0 && n - 1 >= 0 )
    if (mensaje[n - 3] == 5 && mensaje[n - 2] == 0 && mensaje[n - 1] == 2)
        return true;
    return false;
}

bool personasEstanEnPeligro(int *mensaje, int n) {
    // Si se encuentra 3 veces consecutivas el número CERO significa que están en peligro
    for (int i = 0; i < n; ++i) {
        // Verificar que sean posiciones válidas
        if (i + 1 < n && i + 2 < n) {
            // Acceder a las posiciones válidas
            if (mensaje[i] == 0 && mensaje[i + 1] == 0 && mensaje[i + 2] == 0) {
                return true;
            }
        }
    }
    return false;
}

bool personasEstanEnPeligro2(int* mensaje, int n) {
    // Si se encuentra 3 veces consecutivas el número CERO significa que están en peligro
    for (int i = 0; i <= n - 3; ++i) {
        if (mensaje[i] == 0 && mensaje[i + 1] == 0 && mensaje[i + 2] == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    srand(time(NULL));

    int* mensaje;
    int n, total_mensajes = 0, frio = 0, calor = 0, hambre = 0;
    char caracter;
    do {
        // a) Generar el mensaje de longitud variable entre 10 y 20.
        n = nextInt(10, 20);
        mensaje = new int[n];
        total_mensajes++;
        generarMensaje(mensaje, n);

        // b) Imprimir el mensaje generado
        imprimirMensaje(mensaje, n);

        // c) Mostrar el mensaje : “Las personas tienen frío”.
        if (personasTienenFrio(mensaje, n)) {
            cout << "Las personas tienen frío" << endl;
            frio++;
        }

        // d) Mostrar el mensaje : “Las personas tienen calor”.
        if (personasTienenCalor(mensaje, n)) {
            cout << "Las personas tienen calor" << endl;
            calor++;
        }

        // e) Mostrar el mensaje : “Las personas tienen hambre”.
        if (personasTienenHambre(mensaje, n)) {
            cout << "Las personas tienen hambre" << endl;
            hambre++;
        }
		 
        // f) Mostrar el mensaje : “Peligro!”.
        if (personasEstanEnPeligro(mensaje, n)) {
            cout << "Peligro!" << endl;
        }
        delete[]mensaje;
        caracter = getch();
    } while (caracter != 'T');
	
    // Cantidad de mensajes que se procesaron.
    cout << "\nLa cantidad de mensajes que se procesaron es: " << total_mensajes << endl;

    // La cantidad de veces que se ha solicitado abrigo.
    cout << "La cantidad de veces que se ha solicitado abrigo es: " << frio << endl;

    // La cantidad de veces que se ha solicitado agua.
    cout << "La cantidad de veces que se ha solicitado agua es: " << calor << endl;

    // La cantidad de veces que se ha solicitado alimento.
    cout << "La cantidad de veces que se ha solicitado alimento es: " << hambre << endl;

    return 0;
}