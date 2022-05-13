#include <iostream>
#include <iomanip>
using namespace std;

int ingresarNumeroTriangulos(){
    int num_triangulos;
    do{
        cout<<"Ingrese el numero de triangulos: ";
        cin>>num_triangulos;
    }while(num_triangulos >= 10 || num_triangulos < 0 );
    return num_triangulos;
}

int ingresarNumero(){
    int numero;
    do{
        cout<<"Ingrese N: ";
        cin>>numero;
    }while(numero >= 10 || numero < 0);
    return numero;
}

int ingresarEspacios(){
    int espacios;
    do{
        cout<<"Ingrese numero de espacios entre triangulos: ";
        cin>>espacios;
    }while(espacios >= 10 || espacios < 0);
    return espacios;
}

void imprimirEspaciosEnBlanco(int num_espacios) {
    for (int i = 1; i <= num_espacios; ++i) {
        cout << " ";
    }
}

void imprimirTriangulosRectangulos(int num_triangulos, int n=5, int num_espacios=3){
    /* Si el valor de n es 3 y tenemos que imprimir 3 espacios entre cada triangulo.
       Entonces tenemos que imprimir lo siguiente:
       *           *           *
       * *         * *         * *
       * * *       * * *       * * *
       0 1 2 3 4 5 6 7 8 9 0 1 2 3 4
       Los valores anteriores representan las posiciones de las columnas empezando desde 0. Los ultimos
       valores son 10, 11, ..., 16, solo se coloca el ultimo digito para tener una mejor visualizacion

       El numero de columnas a imprimir depende del lado del triangulo, numero de triangulos y espacios
       En el ejemplo tenemos num_triangulos=3, n=3, num_espacios=3
       Podemos analizar la ultima fila, en la ultima fila imprimirmos 9 asteriscos y 6 espacios en blanco
       Esto lo podemos obtener de la siguiente manera:
       - Numero de astericos = num_triangulos * n = 3 * 3 = 9
       - Espacios en blanco = num_espacios * (num_triangulos - 1) = 3 * 2 = 6
       De este modo obtenemos el numero de columnas de toda la figura
    */
    int num_columnas = num_triangulos * n + num_espacios * (num_triangulos - 1);
    int espacios_centrar = 40 - num_columnas/2;

    // Imprimimos fila por fila
    for( int fila = 0 ; fila < n ; ++fila ){

        // Espacios para centrar la figura
        imprimirEspaciosEnBlanco(espacios_centrar);

        // Iteramos sobre todas las columnas de la figura
        for( int columna = 0 ; columna < num_columnas ; ++columna ){
            /* Para entender mejor la solucion veamos la figura esperada
               *           *           *
               * *         * *         * *
               * * *       * * *       * * *
               0 1 2 3 4 5 6 7 8 9 0 1 2 3 4

               Entonces para mostrar la figura tenemos que imprimir astericos en las columnas 0, 6 y 12.
               Si se fijan el valor 6 es igual al lado del triangulo (n) + el numero de espacios (num_espacios)
               n + num_espacios = 3 + 3 = 6
               El valor 12 es dos veces lo anterior
               2 * (n + num_espacios) = 2 * (3+3) = 2*6 = 12
               Es decir, esos valores son multiplos de (n + num_espacios)

               Como nosotros iteramos sobre todas las columnas, en el ejemplo desde 0 hasta 14 inclusive.
               Podemos verificar si la columna actual es un multiplo de (n + num_espacios).
               Como podemos hacer eso?
               Podemos usar el operador de modulo. Por ejemplo 12 % (3+3) = 12 % 6 = 0
               Si el modulo entre la columna actual y (n + num_espacios) es 0 entonces la columna es un multiplo de (n + num_espacios)

               Algo interesante del modulo es que este operador sirve para definir ciclos. Por ejemplo si tenemos la lista de indices:
               [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]
               Y le sacamos modulo 6 a todos los elementos de la lista obtenemos lo siguiente:
               [0, 1, 2, 3, 4, 5, 0, 1, 2, 3,  4,  5,  0,  1,  2,  3,  4,  5,  0,  1,  2]
               Podemos ver que se forma como un ciclo de las posiciones desde 0 hasta 5 inclusive. Esto podemos usarlo en la figura.
               Al sacar modulo n + num_espacios, en el ejemplo 3 + 3 = 6, tenemos lo siguiente


               *           *           *
               * *         * *         * *
               * * *       * * *       * * *
               0 1 2 3 4 5 0 1 2 3 4 5 0 1 2

               Si se fijan de este modo cada triangulo posee las mismas columnas (entre 0 y 5 inclusive). Estos nuevos valores los
               almacenamos en la variable columna_actual. De este modo simplificamos el problema.
            */
            int columna_actual = columna % (n + num_espacios);

            /* Imprimimos asteriscos en los siguientes casos:
               1. Cuando la columna actual es 0 en cualquier triangulo (columna_actual == 0)
               2. Cuando estamos en la ultima fila pero la columna es menor que el lado del triangulo (fila == n - 1 && columna_actual < n)
                  Consideramos menor ya que los iteradores inician en 0
               3. Cuando tenemos la diagonal (fila == columna_actual)
               Cualquier otro caso imprimimos espacio en blanco
            */
            if( columna_actual == 0 || (fila == n - 1 && columna_actual < n ) || (fila == columna_actual) ){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int num_triangulos = ingresarNumeroTriangulos();
    int n = ingresarNumero();
    int num_espacios = ingresarEspacios();
    imprimirTriangulosRectangulos(num_triangulos, n, num_espacios);
    return 0;
}
