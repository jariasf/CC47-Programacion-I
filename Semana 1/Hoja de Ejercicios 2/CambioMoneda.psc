Algoritmo CambioMoneda
	
  Escribir "Ingresar el valor de K:"
  Leer K

  monedas_cinco = trunc(K/5) // entero(38/5) = 7
  K = K % 5                  // 38%5 = 3

  monedas_dos = trunc(K/2) // entero(3/2) = 1
  K = K % 2                // 3 % 2 = 1

  monedas_uno = K//trunc(K/1)
	
  Escribir "Cantidad de monedas de 5 es: ", monedas_cinco
  Escribir "Cantidad de monedas de 2 es: ", monedas_dos
  Escribir "Cantidad de monedas de 1 es: ", monedas_uno
  
FinAlgoritmo
