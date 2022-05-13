#include <iostream>
#include <iomanip>
using namespace std;

int ingresarNumero(){
    int n;
    do{
        cout<<"Ingrese un numero: ";
        cin>>n;
    }while(n < 2 || n > 10);
    return n;
}

void imprimirEspaciosEnBlanco(int num_espacios){
    for( int i = 0; i < num_espacios ; ++i ){
        cout<<" ";
    }
}

void imprimirFigura(int n){
    int espacios_centrar = 40 - n;
    int inicial;

    // Parte superior
    for( int i = n ; i >= 1 ; --i ){
        // Espacios en blanco para el centrado
        imprimirEspaciosEnBlanco(espacios_centrar);

        // Primera mitad
        for( int j = n ; j >= i ; --j ){
            cout<<j;
        }
        imprimirEspaciosEnBlanco(i - 1);

        // Segunda mitad
        imprimirEspaciosEnBlanco(i - 2);

        // La ultima fila de la primera parte es un caso especial
        if( i == 1 ){ // caso de ultima fila, 1 no es repetido por lo tanto empezamos en 2
            inicial = i + 1;
        }else{        // para otros casos empezamos acorde a la iteracion
            inicial = i;
        }
        for( int j = inicial ; j <= n ; ++j ){
            cout<<j;
        }
        cout<<endl;
    }


    // Parte inferior
    for( int i = 2 ; i <= n ; ++i ){
        // Espacios en blanco para el centrado
        imprimirEspaciosEnBlanco(espacios_centrar);

        // Primera mitad
        for( int j = n ; j >= i ; --j ){
            cout<<j;
        }
        imprimirEspaciosEnBlanco(i - 1);

        // Segunda mitad
        imprimirEspaciosEnBlanco(i - 2);
        // A diferencia de la parte superior, no nos preocupamos
        // del caso especial ya que no se duplica
        for( int j = i ; j <= n ; ++j ){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    int n = ingresarNumero();
    imprimirFigura(n);
    return 0;
}
