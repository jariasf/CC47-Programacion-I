Algoritmo VerficiarCodigoASCII

	Escribir "Ingresar un n�mero entero:"
	Leer num
	
	Si num >= 48 y num <= 57 Entonces //[48, 57]
		Escribir "El n�mero ingresado representa un d�gito"
	SiNo
		Si num >= 65 y num <= 90 Entonces // [65, 90]
			Escribir "El n�mero ingresado representa una letra may�scula"
		SiNo
			Si num >= 97 y num <= 122 Entonces // [97. 122]
				Escribir "El n�mero ingresado representa una letra min�scula"
			SiNo
				Escribir "El n�mero ingresado representa otro caracter"
			FinSi
		FinSi
	FinSi
	
FinAlgoritmo
