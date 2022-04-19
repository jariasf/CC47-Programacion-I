Algoritmo PC1_1_B
    Escribir "Ingrese el estado actual (E: Estudiante, P: Profesor, I: Industria): " 
    Leer estado_actual 

    Escribir "Ingrese el número de personas: "
    Leer numero_personas 

    precio = 0
    Si estado_actual = 'E' Entonces 
        precio = 450
    SiNo 
        Si estado_actual = 'P' Entonces 
            precio = 550
        SiNo 
            Si estado_actual = 'B' Entonces 
                precio = 600 
            FinSi 
        FinSi 
    FinSi 

    descuento = 0 
    Si numero_personas >= 5 y numero_personas <= 10 Entonces 
        descuento = 0.05 
    SiNo 
        Si numero_personas >= 11 y numero_personas <= 15 Entonces 
            descuento = 0.1
        SiNo 
            Si numero_personas >= 16  Entonces 
                descuento = 0.15 
            FinSi 
        FinSi 
	FinSi 

    precio = precio - precio * descuento 
    //precio = precio * ( 1 - descuento )

    Escribir "El monto a pagar es: ", precio * numero_personas 
FinAlgoritmo