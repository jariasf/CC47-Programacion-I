Algoritmo EstadoAlumno

    // Entrada
    Escribir "Ingresar la nota final:"
    Leer nota_final

    // Proceso 
    Si nota_final < 12.5 Entonces
        // Entrar [0, 12.4999]
        // Salida
        Escribir "El alumno est� desaprobado"
    SiNo
        // -> [12.5, x]
        //Si nota_final >= 12.5 y nota_final <= 20 Entonces  // No es del todo necesario evaluar nota_final >= 12.5
        Si nota_final <= 20 Entonces  
            // Salida
            Escribir "El alumno est� aprobado"
        SiNo
            // Salida
            Escribir "La nota es inv�lida"
        Fin Si
    Fin Si

FinAlgoritmo
