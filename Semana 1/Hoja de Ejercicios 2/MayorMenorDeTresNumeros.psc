Algoritmo MayorMenorDeTresNumeros

    // Entrada
    Escribir "Ingresar el primer n�mero:"
    Leer a
    Escribir "Ingresar el segundo n�mero:"
    Leer b
    Escribir "Ingresar el tercer n�mero:"
    Leer c
	
    // Proceso
    Si a > b y a > c Entonces
        numero_mayor = a
		Si b > c Entonces
            numero_menor = c
		SiNo
            numero_menor = b
        FinSi
    SiNo
        Si b > a y b > c Entonces
			numero_mayor = b
            Si a > c Entonces
                numero_menor = c
            SiNo
                numero_menor = a
            FinSi
        SiNo
            numero_mayor = c
            Si a > b Entonces
                numero_menor = b
			SiNo
                numero_menor = a
            FinSi
        FinSi
    FinSi

    // Salida
    Escribir "El n�mero mayor es: ", numero_mayor
    Escribir "El n�mero menor es: ", numero_menor

FinAlgoritmo
