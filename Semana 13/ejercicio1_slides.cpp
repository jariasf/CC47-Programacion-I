#include <iostream>
using namespace std;

struct imagenes{
    char tipo;
    int ancho;
    int alto;
    float tamanio;
};

void agregar(imagenes *arreglo, int n, int i){
    if(i == n){
        cout<<"Ya no se pueden adicionar mas imagenes"<<endl;
        return;
    }
    cout<<"Imagen "<<i + 1<<endl;
    cout<<"Ingrese el tipo: ";
    cin>>arreglo[i].tipo;
    cout<<"Ingrese el ancho: ";
    cin>>arreglo[i].ancho;
    cout<<"Ingrese el alto: ";
    cin>>arreglo[i].alto;
    cout<<"Ingrese el tamanio: ";
    cin>>arreglo[i].tamanio;
}

int main(){
    int n = 100;
    imagenes *arreglo = new imagenes[n];
    int opcion, i = 0;
    do{
        cout<<"Menu"<<endl;
        cout<<"1. Agregar"<<endl;
        cout<<"2. Mostrar"<<endl;
        cout<<"3. Buscar"<<endl;
        cout<<"4. Fin"<<endl;
        cout<<"Ingrese opcion: ";
        cin>>opcion;
        switch(opcion){
            case 1: agregar(arreglo, n, i); break;
            case 2: break;
            case 3: break;
            case 4: break;
        }
        cout<<endl;
    }while(opcion != 4);
    
    
    delete []arreglo;
    return 0;
}