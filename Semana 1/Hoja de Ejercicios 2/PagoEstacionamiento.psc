Algoritmo PagoEstacionamiento

    // Entrada
    Escribir "Ingrese la hora de entrada (hhmm):"
    Leer tiempo_entrada
    Escribir "Ingrese la hora de salida (hhmm):"
    Leer tiempo_salida

    // Convertir el número en horas y minutos
    minutos_entrada = tiempo_entrada % 100    // hhmm -> mm
    horas_entrada = trunc(tiempo_entrada/100) // hhmm -> hh
    minutos_salida = tiempo_salida % 100      // hhmm -> mm
    horas_salida = trunc(tiempo_salida/100)   // hhmm -> hh	

    // Determinar la cantidad de horas
    cantidad_horas = horas_salida - horas_entrada // horas completas
    Si minutos_salida > minutos_entrada Entonces // si tenemos una fracción
        cantidad_horas = cantidad_horas + 1
    FinSi

    // Calcular el monto a pagar
    monto_pago = 10 + (cantidad_horas - 1) * 6

    // Salida
    Escribir "Cantidad de horas a pagar:", cantidad_horas
    Escribir "El monto a pagar es: ", monto_pago

FinAlgoritmo
