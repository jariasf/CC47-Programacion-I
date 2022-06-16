#include <iostream>
using namespace std;

void estructura_declaracion1(){
    struct{
       int edad;
       char sexo;
       char inicial_nombre;
       float salario;
    }variable_persona, otra_variable;

    // Asignacion
    variable_persona.edad = 25;
    variable_persona.sexo = 'M';
    variable_persona.inicial_nombre = 'J';
    variable_persona.salario = 100.5;

    // Acceso e impresion
    cout<<"Edad: "<<variable_persona.edad<<endl;
    cout<<"Sexo: "<<variable_persona.sexo<<endl;
    cout<<"Inicial: "<<variable_persona.inicial_nombre<<endl;
    cout<<"Salario: "<<variable_persona.salario<<endl;
}

struct Persona{
    int edad;
    char sexo;
    char inicial_nombre;
    float salario;
};

int main() {

    Persona variable_persona, otra_variable;

    // Asignacion
    variable_persona.edad = 25;
    variable_persona.sexo = 'M';
    variable_persona.inicial_nombre = 'J';
    variable_persona.salario = 100.5;

    // Acceso e impresion
    cout<<"Edad: "<<variable_persona.edad<<endl;
    cout<<"Sexo: "<<variable_persona.sexo<<endl;
    cout<<"Inicial: "<<variable_persona.inicial_nombre<<endl;
    cout<<"Salario: "<<variable_persona.salario<<endl;

    return 0;
}