Algoritmo PuntoDentroDeCirculo
	
    Escribir "Ingresar la coordenada x:"
    Leer coordenada_x
    Escribir "Ingresar la coordenada y:"
    Leer coordenada_y

    distancia = coordenada_x ^ 2 + coordenada_y ^ 2
    Si distancia <= 25 Entonces
        Escribir "El punto se encuentra dentro del círculo"		
    SiNo
        Escribir "El punto no se encuentra dentro del círculo"
    FinSi

FinAlgoritmo
