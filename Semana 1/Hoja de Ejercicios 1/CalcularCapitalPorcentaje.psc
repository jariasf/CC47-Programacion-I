Algoritmo CalcularCapitalPorcentaje
	
  // Entrada de datos
  Escribir "Ingresar el aporte de Carmela:"
  Leer aporte_carmela
  Escribir "Ingresar el aporte de Javier:"
  Leer aporte_javier
  Escribir "Ingresar el aporte de Eulogio:"
  Leer aporte_eulogio

  // Proceso
  capital_total = aporte_carmela + aporte_javier + aporte_eulogio
  porcentaje_carmela = aporte_carmela * 100/capital_total
  porcentaje_javier = aporte_javier * 100/capital_total
  porcentaje_eulogio = aporte_eulogio * 100/capital_total

  // Salida
  Escribir "El capital total es: ", capital_total
  Escribir "El porcentaje de Carmela es: ", porcentaje_carmela, "%"
  Escribir "El porcentaje de Javier es: ", porcentaje_javier, "%"
  Escribir "El porcentaje de Eulogio es: ", porcentaje_eulogio, "%"	

FinAlgoritmo
