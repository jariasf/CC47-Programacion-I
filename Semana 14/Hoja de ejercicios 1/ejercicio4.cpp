#include <iostream>
using namespace std;

#define ENERO 0
#define FEBRERO 1
#define MARZO 2
#define ABRIL 3
#define MAYO 4
#define DICIEMBRE 11

void registrarInformacion(int** ventas, int meses, int agencias) {
    for (int i = 0; i < meses; ++i) {
        for (int j = 0; j < agencias; ++j) {
            cout << "Ingrese informacion de la venta del mes " << i + 1<< " para agencia " << j + 1<<": ";
            cin >> ventas[i][j];
        }
    }
}

void generarInformacion(int **ventas, int meses, int agencias) {
    for (int i = 0 ; i < meses; ++i) {
        for (int j = 0; j < agencias; ++j) {
            ventas[i][j] = rand() % 101;
        }
    }
}

void mostrarInformacion(int **ventas, int meses, int agencias) {
    cout << "\nVentas de cada agencia" << endl;
    for (int j = 0; j < agencias; ++j) {
        cout << "Agencia " << j + 1 << endl;
        for (int i = 0; i < meses; ++i) {
            cout << "Ventas del mes "<<i+1<<": "<< ventas[i][j] << endl;
        }
    }
}

void mostrarMatriz(int **ventas, int meses, int agencias) {
    cout << endl;
    for (int i = 0; i < meses; ++i) {
        for (int j = 0; j < agencias; ++j) {
            cout << ventas[i][j] << " ";
        }
        cout << endl;
    }
}

int totalVentasPorAgencia3(int** ventas, int meses, int agencias) {
    int total_ventas = 0;
    for (int i = 0; i < meses; ++i) {
        total_ventas += ventas[i][2];
    }
    return total_ventas;
}

int totalVentasPorAgencia(int** ventas, int meses, int agencias, int agencia) {
    int total_ventas = 0;
    for (int i = 0; i < meses; ++i) {
        total_ventas += ventas[i][agencia];
    }
    return total_ventas;
}

double promedioVentasPorMesDiciembre(int** ventas, int meses, int agencias) {
    double promedio = 0.;
    for (int j = 0; j < agencias; ++j) {
        promedio += ventas[11][j];
    }
    promedio /= agencias;
    return promedio;
}

double promedioVentasPorMes(int** ventas, int meses, int agencias, int mes) {
    double promedio = 0.;

    for (int j = 0; j < agencias; ++j) {
        promedio += ventas[mes][j];
    }
    promedio /= agencias;
    return promedio;
}

int agenciaDeMayoresVentasDeMayo(int **ventas, int meses, int agencias) {
    int mayor_venta = ventas[4][0];
    int mayor_agencia = 0;
    for (int j = 1; j < agencias; ++j) {
        if (ventas[4][j] > mayor_venta) {
            mayor_venta = ventas[4][j];
            mayor_agencia = j;
        }
    }
    return mayor_agencia;
}

int agenciaDeMayoresVentasPorMes(int** ventas, int meses, int agencias, int mes) {
    int mayor_venta = ventas[mes][0];
    int mayor_agencia = 0;
    for (int j = 1; j < agencias; ++j) {
        if (ventas[mes][j] > mayor_venta) {
            mayor_venta = ventas[4][j];
            mayor_agencia = j;
        }
    }
    return mayor_agencia;
}

int mesDeMenoresVentas(int **ventas, int meses, int agencias) {
    int ventas_mes;
    int menor_venta;
    int menor_mes = 0;
    for (int i = 0; i < meses; ++i) {
        // Total de ventas
        ventas_mes = 0;
        for (int j = 0; j < agencias; ++j) {
            ventas_mes += ventas[i][j];
        }

        // Calcular el menor
        if (i == 0) {
            menor_venta = ventas_mes;
            menor_mes = i;
        }
        else if( ventas_mes < menor_venta ) {
            menor_venta = ventas_mes;
            menor_mes = i;
        }
    }
    return menor_mes;
}

int* ventasTotalesPorMes(int **ventas, int meses, int agencias) {
    int* ventas_mes = new int[meses];
    for (int i = 0; i < meses; ++i) {
        ventas_mes[i] = 0;
        for (int j = 0; j < agencias; ++j) {
            ventas_mes[i] += ventas[i][j];
        }
    }
    return ventas_mes;
}

int mesDeMenoresVentasMetodo2(int** ventas, int meses, int agencias) {
    // Total de ventas por mes
    int* ventas_mes = ventasTotalesPorMes(ventas, meses, agencias);

    // Mes de menor venta en un arreglo
    int menor_venta = ventas_mes[0];
    int menor_mes = 0;
    for (int i = 1; i < meses; ++i) {
        if (menor_venta > ventas_mes[i]) {
            menor_venta = ventas_mes[i];
            menor_mes = i;
        }
    }
    delete[]ventas_mes;
    return menor_mes;
}

int main() {
    /*
    int logo[3][6] = {{1,2,3,4,5,6},
                      {7,8,9,10,11},
                      {12,13,14,15,16}};
    */
    srand(time(NULL));
    int meses = 12, agencias = 5;
    int** ventas = new int* [meses];
    for (int i = 0; i < meses; ++i) {
        ventas[i] = new int[agencias];
    }
    
    // a) Registrar la información de las ventas por mes de cada una de las agencias.
    generarInformacion(ventas, meses, agencias);
    //registrarInformacion(ventas, meses, agencias);

    // b) Mostrar en pantalla el resumen de ventas de cada agencia.
    mostrarInformacion(ventas, meses, agencias);

    // c) Mostrar cuál fue el total de ventas en el año de la Agencia 3.
    cout << "El total de ventas en el anio de la agencia 3 es " << totalVentasPorAgencia(ventas, meses, agencias, 2) << endl;
    //cout<<"El total de ventas en el anio de la agencia 3 es "<<totalVentasPorAgencia3(ventas, meses, agencias)<<endl;

    // d) Mostrar el promedio de ventas en el mes de diciembre.
    cout<<"El promedio de ventas en el mes de diciembre es "<<promedioVentasPorMes(ventas, meses, agencias, DICIEMBRE)<<endl;
    //cout<<"El promedio de ventas en el mes de diciembre es "<<promedioVentasPorMesDiciembre(ventas, meses, agencias)<<endl;
    
    // e) Mostrar el número de la agencia que tuvo mayores ventas en el mes de mayo.
    cout << "Agencia que tuvo mayores ventas en el mes de Mayo es " << agenciaDeMayoresVentasPorMes(ventas, meses, agencias, MAYO) + 1 << endl;
    //cout << "Agencia que tuvo mayores ventas en el mes de Mayo es " << agenciaDeMayoresVentasDeMayo(ventas, meses, agencias) + 1 << endl;

    // f) Indicar en qué mes se registraron las menores ventas del año, considerando todas las agencias.
    cout << "El mes en que se registraron las menores ventas del anio es " << mesDeMenoresVentas(ventas, meses, agencias) << endl;

    for (int i = 0; i < meses; ++i)
        delete[] ventas[i];
    delete[]ventas;
    return 0;
}