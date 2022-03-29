Algoritmo VerficiarCodigoASCII

	Escribir "Ingresar un número entero:"
	Leer num
	
	Si num >= 48 y num <= 57 Entonces //[48, 57]
		Escribir "El número ingresado representa un dígito"
	SiNo
		Si num >= 65 y num <= 90 Entonces // [65, 90]
			Escribir "El número ingresado representa una letra mayúscula"
		SiNo
			Si num >= 97 y num <= 122 Entonces // [97. 122]
				Escribir "El número ingresado representa una letra minúscula"
			SiNo
				Escribir "El número ingresado representa otro caracter"
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo
