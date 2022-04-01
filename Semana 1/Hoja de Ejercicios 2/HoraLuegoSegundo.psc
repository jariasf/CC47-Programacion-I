Algoritmo HoraLuegoSegundo

	// Entrada
    Escribir "Ingresar el número de horas:"
    Leer horas
    Escribir "Ingresar el número de minutos:"
    Leer minutos
    Escribir "Ingresar el número de segundos"
    Leer segundos
	
    // Proceso
    segundos = segundos + 1
    Si segundos == 60 Entonces
        segundos = 0
        minutos = minutos + 1
        Si minutos == 60 Entonces
		    minutos = 0
            horas = horas + 1
            Si horas == 24 Entonces
                horas = 0
            FinSi
        FinSi
    FinSi
	
    // Salida
    Escribir "Hora luego de un segundo: ", horas, ":", minutos, ":", segundos

FinAlgoritmo
