Algoritmo MayorMenorDeTresNumeros

    // Entrada
    Escribir "Ingresar el primer número:"
    Leer a
    Escribir "Ingresar el segundo número:"
    Leer b
    Escribir "Ingresar el tercer número:"
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
    Escribir "El número mayor es: ", numero_mayor
    Escribir "El número menor es: ", numero_menor

FinAlgoritmo
