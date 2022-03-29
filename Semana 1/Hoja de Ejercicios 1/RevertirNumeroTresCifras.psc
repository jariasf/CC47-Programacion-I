Algoritmo RevertirNumeroTresCifras
  //Definir numero_tres_cifras, tercer_digito, segundo_digito Como Entero
  Escribir "Ingresar un número entero positivo:"
  Leer numero_tres_cifras

  Si numero_tres_cifras < 100 o numero_tres_cifras > 999 Entonces
	Escribir "Número incorrecto"
  SiNo
	tercer_digito = numero_tres_cifras % 10 // abc -> c
	numero_dos_cifras = trunc(numero_tres_cifras/10)  // ab
	segundo_digito = numero_dos_cifras % 10 // ab -> b
	primer_digito = trunc(numero_dos_cifras/10) // a

	numero_reves = tercer_digito * 100 + segundo_digito * 10 + primer_digito
		
	Escribir "El número al revés es: ", tercer_digito, segundo_digito, primer_digito
	Escribir "El número al revés es: ", numero_reves
  Fin Si
FinAlgoritmo
