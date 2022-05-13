#include <iostream>
using namespace std;

bool esNoticiaInvalida(char noticia){
    if( noticia != 'd' && noticia != 'D' &&
        noticia != 'a' && noticia != 'A' &&
        noticia != 'e' && noticia != 'E' &&
        noticia != 'x' && noticia != 'X'){
        return true;
    }
    return false;
}

bool esOrigenInvalido(char origen){
    if( origen != 'e' && origen != 'E' &&
        origen != 'n' && origen != 'N' ){
        return true;
    }
    return false;
}

char ingresarNoticia(){
    char noticia;
    do{
        cout<<"Ingrese tipo de noticia: ";
        cin>>noticia;
    }while( esNoticiaInvalida(noticia) );
    return noticia;
}

int ingresarHoraPublicacion(){
    int hora;
    do{
        cout<<"Hora de publicacion: ";
        cin>>hora;
    }while( hora < 0 || hora > 23 );
    return hora;
}

char ingresarOrigen(){
    char origen;
    do{
        cout<<"Origen: ";
        cin>>origen;
    }while(esOrigenInvalido(origen));
    return origen;
}

void mostrarHorasMasFrecuentes(int madrugada, int manhana, int tarde, int noche){
    /*
        1. Primero hallamos la hora mas frecuente (la mayor)
        2. Comparamos cada hora con la mas frecuente para verificar si en la
           hora actual se publicaron mas noticias
           2.1 Si la hora actual es igual a la mas frecuente la imprimimos
    */
    // 1. Hallamos la hora mas frecuente
    int hora_mas_frecuente = madrugada; // Asumimos que la mas frecuente es madrugada
    // Verificamos si manhana es la mas frecuente
    if( hora_mas_frecuente < manhana ){ // Si manhana es mas frecuente
        hora_mas_frecuente = manhana;   // Actualizamos la hora mas frecuente
    }
    // Verificamos si tarde es la mas frecuente
    if( hora_mas_frecuente < tarde ){ // Si tarde es mas frecuente
        hora_mas_frecuente = tarde;   // Actualizamos la hora mas frecuente
    }
    // Verificamos si noche es la mas frecuente
    if( hora_mas_frecuente < noche ){ // Si noche es mas frecuente
        hora_mas_frecuente = noche;   // Actualizamos la hora mas frecuente
    }

    if( hora_mas_frecuente == 0 ){  // Si no se ingresaron noticias
        cout<<"No se publicaron noticias"<<endl;
        return;
    }

    // 2. Comparamos cada hora con la mas frecuente y mostramos las mas frecuentes
    cout<<"En la ";
    if( madrugada == hora_mas_frecuente ){ // Si madrugada es la mas frecuente mostramos resultado
        cout<<"MADRUGADA ";
    }

    if( manhana == hora_mas_frecuente ){ // Si manhana es la mas frecuente mostramos resultado
        cout<<"MANHANA ";
    }

    if( tarde == hora_mas_frecuente ){ // Si tarde es la mas frecuente mostramos resultado
        cout<<"TARDE ";
    }

    if( noche == hora_mas_frecuente ){ // Si noche es la mas frecuente mostramos resultado
        cout<<"NOCHE ";
    }
    cout<<"se publicaron mas noticias"<<endl;
}

void mostrarTipoNoticiaMasFrecuente(int extranjera, int nacional){
    if( extranjera > nacional ){
        cout<<"Predominan las noticias del Extranjero"<<endl;
    }else if( extranjera < nacional ){
        cout<<"Predominan las noticias Nacionales"<<endl;
    }else{
        cout<<"Igual numero de noticias Nacionales y Extranjeras"<<endl;
    }
}

int main(){
    char noticia, origen;
    int hora;
    int deporte = 0, actualidad = 0, entretenimiento = 0;
    int madrugada = 0, manhana = 0, tarde = 0, noche = 0;
    int nacional = 0, extranjera = 0;

    noticia = ingresarNoticia();
    while(noticia != 'x' && noticia != 'X'){
        hora = ingresarHoraPublicacion();
        origen = ingresarOrigen();

        // Noticias
        if( noticia == 'd' || noticia == 'D' ){
            deporte++;
        }else if( noticia == 'a' || noticia == 'A' ){
            actualidad++;
        }else if( noticia == 'e' || noticia == 'E' ){
            entretenimiento++;
        }

        // Horas de Publicacion
        if(hora >= 0 && hora <= 5){
            madrugada++;
        }else if( hora >= 6 && hora <= 12){
            manhana++;
        }else if( hora >= 13 && hora <= 17){
            tarde++;
        }else{
            noche++;
        }

        // Origen
        if(origen == 'e' || origen == 'E'){
            extranjera++;
        }else{
            nacional++;
        }

        cout<<endl;
        noticia = ingresarNoticia();
    }

    cout<<"\nLos resultados son:"<<endl;
    cout<<"-------------------"<<endl;
    cout<<"Noticias de Deporte: "<<deporte<<endl;
    cout<<"Noticias de Actualidad: "<<actualidad<<endl;
    cout<<"Noticias de Entretenimiento: "<<entretenimiento<<endl;
    mostrarHorasMasFrecuentes(madrugada, manhana, tarde, noche);
    mostrarTipoNoticiaMasFrecuente(extranjera, nacional);

    return 0;
}
