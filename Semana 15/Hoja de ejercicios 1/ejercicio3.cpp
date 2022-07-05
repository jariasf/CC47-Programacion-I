#include <iostream>
using namespace std;

char departamentos[4] = {'A', 'L', 'C', 'P'};

struct Persona {
    int nivel_aprobacion;
    int edad;
    char departamento;
};

int nextInt(int min , int max) {
    return min + rand() % (max - min + 1);
}


char generarDepartamento() {
    return departamentos[nextInt(0,3)];
}

void mostrarDatosEncuestados(Persona* encuestados, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "\nEncuestado: " << i + 1 << endl;
        cout << "1. Nivel de aprobacion: " << encuestados[i].nivel_aprobacion<<endl;
        cout << "2. Edad: " << encuestados[i].edad << endl;
        cout << "3. Departamento: " << encuestados[i].departamento << endl;
    }
}

void generarDatosEncuestados(Persona* encuestados, int n) {
    for (int i = 0; i < n; ++i) {
        encuestados[i].nivel_aprobacion = nextInt(1, 5);
        encuestados[i].edad = nextInt(18, 150);
        encuestados[i].departamento = generarDepartamento();
    }
}

void votacionPorNivelDeAprobacion(Persona* encuestados, int n) {
    int* frecuencias = new int[6]{0};
    //for (int i = 0; i < n; ++i)
    //    frecuencias[i] = 0;

    for (int i = 0; i < n; ++i) {
        int nivel_actual = encuestados[i].nivel_aprobacion;
        frecuencias[nivel_actual]++;
    }

    cout << "\nVotos por nivel de aprobacion" << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << "Nivel de aprobacion " << i << ": " << frecuencias[i] << endl;
    }
    delete[] frecuencias;
}

int encuestadosCajamarcaPuno(Persona* encuestados, int n) {
    int contador = 0;
    for (int i = 0; i < n; ++i) {
        if (encuestados[i].departamento == 'C' || encuestados[i].departamento == 'P')
            contador++;
    }
    return contador;
}


bool comparar(Persona &nuevo, Persona &actual) {
    if (nuevo.edad > actual.edad) {
        // Hemos encontrado otra persona de mayor edad
        return true;
    }
    return false;
}

void ordenarDescendentePorEdad(Persona* encuestados, int n) {
    int max_index;
    for (int i = 0; i < n; ++i) {
        max_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (comparar(encuestados[j], encuestados[max_index])) {
                max_index = j;
            }
        }
        swap(encuestados[i], encuestados[max_index]);
    }
}

bool compararPorEdadyDepartamento(Persona &nuevo, Persona &actual) {

    if (nuevo.edad > actual.edad) {
        // Hemos encontrado otra persona de mayor edad
        return true;
    }
    else if (nuevo.edad == actual.edad) {
        // Comparar por departamento
        if (nuevo.departamento > actual.departamento) {
            // Hemos encontrado otra persona de igual edad pero mayor departamento
            return true;
        }
    }

    return false;
}

void ordenarDescendentePorEdadyDepartamento(Persona* encuestados, int n) {
    int max_index;
    for (int i = 0; i < n; ++i) {
        max_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (compararPorEdadyDepartamento(encuestados[j], encuestados[max_index])) {
                max_index = j;
            }
        }
        swap(encuestados[i], encuestados[max_index]);
    }
}


bool comprarPorEdadyDepartamento2(Persona &nuevo, Persona &actual) {
    if (nuevo.edad > actual.edad) {
        // Hemos encontrado otra persona de mayor edad
        return true;
    }
    else if (nuevo.edad == actual.edad) {
        // Comparar por departamento
        if ( nuevo.departamento < actual.departamento ) {
            // Hemos encontrado otra persona de igual edad pero menor departamento
            return true;
        }
    }
}

void ordenarDescendentePorEdadyAscendentePorDepartamento(Persona* encuestados, int n) {
    int max_index;
    for (int i = 0; i < n; ++i) {
        max_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (compararPorEdadyDepartamento(encuestados[j], encuestados[max_index])) {
                max_index = j;
            }
        }
        swap(encuestados[i], encuestados[max_index]);
    }
}

void departamentoMayorMenorEdad(Persona* encuestados, int n) {
    cout << "\nDepartamento del encuestado de menor edad es " << encuestados[n - 1].departamento << endl;
    cout << "\nDepartamento del encuestado de mayor edad es " << encuestados[0].departamento << endl;
}

void departamentoMayorMenorEdadIguales(Persona* encuestados, int n) {
    // Mostramos departamento de todas las que tienen mayor y menor edad
    cout << "\nDepartamentos de los encuestados de mayor edad son:" << endl;
    for(int i = 0; i < n ; ++i ){
        if (encuestados[i].edad == encuestados[0].edad) {
            cout << encuestados[i].departamento << endl;
        }
        else
            break;
    }

    cout << "\nDepartamentos de los encuestados de menor edad son:" << endl;
    for (int i = n - 1; i >= 0; --i) {
        if (encuestados[i].edad == encuestados[n - 1].edad) {
            cout << encuestados[i].departamento << endl;
        }
        else
            break;
    }
}

int main() {
    srand(time(NULL));

    int n;
    Persona* encuestados;

    // Ingrese el número de personas encuestadas(N).Este valor no debe ser mayor a 100.
    do {
        cout << "Ingrese el numero de personas encuestadas: ";
        cin >> n;
    } while (n <= 0 || n > 100);

    encuestados = new Persona[n];
    
    // Genere aleatoriamente los datos de cada uno de los encuestados, 
    // es decir el nivel de aprobación(entre 1 y 5), su edad(mayor a 17) y 
    // departamento en donde vive el encuestado (A: Arequipa; C: Cajamarca; L: Lima; P: Puno).
    generarDatosEncuestados(encuestados, n);
    cout << "Personas encuestadas" << endl;
    mostrarDatosEncuestados(encuestados, n);

    // Calcule e imprima para cada nivel de aprobación, la votación obtenida.
    votacionPorNivelDeAprobacion(encuestados, n);

    // Calcule e imprima cuantas personas de Cajamarca o Puno participaron de la encuesta.
    int personas_encuestadas_cp = encuestadosCajamarcaPuno(encuestados, n);
    cout << "\nEl numero de personas encuestadas de Cajamarca o Puno es " << personas_encuestadas_cp << endl;

    // Muestre un listado de toda la información de las personas encuestadas ordenado descendentemente por la edad.
    ordenarDescendentePorEdad(encuestados, n);
    cout << "\nPersonas encuestadas ordenadas descendentemente por la edad"<<endl;
    mostrarDatosEncuestados(encuestados, n);

    // Muestre un listado de toda la información de las personas encuestadas ordenado descendentemente por la edad.
    // En caso tengan la misma edad, ordenar descendentemente por departamento
    ordenarDescendentePorEdadyDepartamento(encuestados, n);
    cout << "\nPersonas encuestadas ordenadas descendentemente por la edad y departamento" << endl;
    mostrarDatosEncuestados(encuestados, n);

    // Muestre un listado de toda la información de las personas encuestadas ordenado descendentemente por la edad.
    // En caso tengan la misma edad, ordenar ascendentemente por departamento
    ordenarDescendentePorEdadyAscendentePorDepartamento(encuestados, n);
    cout << "\nPersonas encuestadas ordenadas descendentemente por la edad y ascendentemente por departamento" << endl;
    mostrarDatosEncuestados(encuestados, n);

    // Determine e imprima el departamento al que pertenecen las personas de menor y mayor edad que fueron encuestadas.
    departamentoMayorMenorEdad(encuestados, n);
    //departamentoMayorMenorEdadIguales(encuestados, n);

    // Muestre un listado de toda la información de las personas encuestadas ordenado ascendentemente por la edad.
    // En caso tengan la misma edad, ordenar descendentemente por departamento y en caso tengan el mismo departamento
    // ordenar ascendentemente por el nivel de aprobacion

    delete[]encuestados;
	return 0;
}