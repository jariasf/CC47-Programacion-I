#include <iostream>
using namespace std;

struct Orden {
    char tipo_cliente;
    char tipo_orden;
    char horario;
    int cantidad_publicitaria;
};


//Generar los datos aleatoriamente para:
// Tipo de Cliente(N: Natural; J: Jurídico)
char tipo_cliente[2] = { 'N', 'J' };
char generarCliente() {
    return tipo_cliente[rand() % 2];
}

// Tipo de Orden(P: Pauta Publicitaria Grabada; V: Locución en vivo)
char tipo_orden[2] = { 'P', 'V' };
char generarOrden() {
    return tipo_orden[rand() % 2];
}

// Horario de Emisión : Mañana, Tarde o Noche(M, T, N)
char horario_emision[3] = { 'M', 'T', 'N' };
char generarHorario() {
    return horario_emision[rand() % 3];
}

int nextInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Cantidad de Publicidad a Emitir por Horario(Entero positivo entre 1 y 10)

void mostrarOrdenes(Orden* ordenes, int n) {
    for (int i = 0; i < n; ++i) {
        cout << "\nOrden " << i + 1 << endl;
        cout << "Tipo de cliente: " << ordenes[i].tipo_cliente<<endl;
        cout << "Tipo de orden: " << ordenes[i].tipo_orden<<endl;
        cout << "Horario: " << ordenes[i].horario << endl;
        cout << "Cantidad Publicitaria: " << ordenes[i].cantidad_publicitaria << endl;
    }
}

void generarOrdenes(Orden* ordenes, int n) {
    for (int i = 0; i < n; ++i) {
        ordenes[i].tipo_cliente = generarCliente();
        ordenes[i].tipo_orden = generarOrden();
        ordenes[i].horario = generarHorario();
        ordenes[i].cantidad_publicitaria = nextInt(1, 10);
    }
}

void porcentajeClientes(Orden* ordenes, int n) {
    int natural = 0, juridico = 0;
    double porcentaje_natural, porcentaje_juridico;
    for (int i = 0; i < n; ++i) {
        if (ordenes[i].tipo_cliente == 'N')
            natural++;
        else
            juridico++;
    }
    porcentaje_natural = 100.0 * natural / n;
    porcentaje_juridico = 100.0 * juridico / (double)n;
    cout << "\nPorcentaje de cliente Natural: " << porcentaje_natural << endl;
    cout << "Porcentaje de cliente Juridico: " << porcentaje_juridico << endl;
}

void publicidadPromedioPorOrden(Orden* ordenes, int n) {
    double promedio_pauta = 0, promedio_locucion = 0;
    int num_pauta = 0, num_locucion = 0;
    for (int i = 0; i < n; ++i) {
        if (ordenes[i].tipo_orden == 'P') {
            promedio_pauta += ordenes[i].cantidad_publicitaria;
            num_pauta++;
        }
        else {
            promedio_locucion += ordenes[i].cantidad_publicitaria;
            num_locucion++;
        }
    }
    promedio_pauta /= num_pauta;
    promedio_locucion /= num_locucion;
    cout << "\nCantidad de publicidad promedio por pauta: " << promedio_pauta << endl;
    cout << "Cantidad de publicidad promedio por locucion: " << promedio_locucion << endl;
}


void swap(int &x, int &y) {
    int tmp = x;
    x = y;
    y = tmp;
}

bool comparar(Orden nuevo, Orden actual) {
    if (nuevo.horario > actual.horario) {
        // Descedente por horario
        return true;
    }
    return false;
}

void ordenarDescendentePorHorario(Orden* ordenes, int n) {
    int max_index;
    for (int i = 0; i < n; ++i) {
        max_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (comparar(ordenes[j], ordenes[max_index])) {
                max_index = j;
            }
        }
        swap(ordenes[i], ordenes[max_index]);
    }
}


bool compararHorarioCantidad(Orden nuevo, Orden actual) {
    if (nuevo.horario > actual.horario) {
        // Ordenar de forma descedente por horario
        return true;
    }
    else if (nuevo.horario == actual.horario) {
        // En caso tengan mismo horario
        if (nuevo.cantidad_publicitaria < actual.cantidad_publicitaria) {
            // Ordenar de forma ascendente por cantidad publicitaria
            return true;
        }
    }
    return false;
}

void ordenerDescendentePorHorarioAscendentePorCantidad(Orden* ordenes, int n) {
    int next_index;
    for (int i = 0; i < n; ++i) {
        next_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (compararHorarioCantidad(ordenes[j], ordenes[next_index])) {
                next_index = j;
            }
        }
        swap(ordenes[i], ordenes[next_index]);
    }
}

bool compararHorarioCantidadCliente(Orden nuevo, Orden actual) {
    if (nuevo.horario < actual.horario) {
        // Ordenar de forma ascedente por horario
        return true;
    }
    else if (nuevo.horario == actual.horario) {
        // En caso tengan mismo horario
        if (nuevo.cantidad_publicitaria > actual.cantidad_publicitaria) {
            // Ordenar de forma descendente por cantidad publicitaria
            return true;
        }
        else if (nuevo.cantidad_publicitaria == actual.cantidad_publicitaria) {
            // En caso tengan mismo horario y misma cantidad publicitaria
            if (nuevo.tipo_cliente < actual.tipo_cliente) {
                // Ordenar de forma ascendente por tipo de cliente
                return true;
            }
        }
    }
    return false;
}

int main() {
    srand(time(NULL));

    int n;
    Orden* ordenes;
    // Ingresar el número de órdenes de publicidad. Este número no deberá ser mayor a 25.
    do {
        cout << "Ingrese el numero de ordenes de publicidad: ";
        cin >> n;
    } while (n <= 0 || n > 25);
    ordenes = new Orden[n];

    // Generar los datos aleatoriamente
    generarOrdenes(ordenes, n);
    mostrarOrdenes(ordenes, n);

    // El porcentaje de clientes de cada tipo que solicitan una orden de publicidad.
    porcentajeClientes(ordenes, n);

    // El horario u horarios en donde se solicita el mayor número de órdenes de publicidad.


    // Cantidad de publicidad promedio por cada tipo de orden (no importa el horario). 
    publicidadPromedioPorOrden(ordenes, n);

    // Ordenar la información de forma descendente por el horario de emisión
    ordenarDescendentePorHorario(ordenes, n);
    mostrarOrdenes(ordenes, n);

    // Ordenar la información de forma descendente por el horario y en caso el horario sea el mismo
    // ordenar de forma ascendente por cantidad publicitaria
    ordenerDescendentePorHorarioAscendentePorCantidad(ordenes, n);
    mostrarOrdenes(ordenes, n);

    delete[]ordenes;
    return 0;
}