Algoritmo PC1_1
    Escribir "Ingrese el tipo de diplomado (D: Data Science, C: Ciberseguridad, B: Big Data): " 
    Leer tipo_diplomado 

    Escribir "Ingrese el número de personas inscritas: "
    Leer numero_personas 

    precio = 0
    Si tipo_diplomado = 'D' Entonces 
        precio = 8000 
    SiNo 
        Si tipo_diplomado = 'C' Entonces 
            precio = 6000 
        SiNo 
            Si tipo_diplomado = 'B' Entonces 
                 precio = 7500 
            FinSi 
        FinSi 
    FinSi 

    descuento = 0 
    Si numero_personas >= 10 y numero_personas < 15 Entonces 
        descuento = 0.05 
    SiNo 
        Si numero_personas >= 15 y numero_personas < 20 Entonces 
            descuento = 0.07 
        SiNo 
            Si numero_personas >= 20 Entonces 
                descuento = 0.1 
            FinSi 
        FinSi 
    FinSi 

    precio = precio - precio * descuento 
    Escribir "El monto final a pagar es: ", precio * numero_personas
FinAlgoritmo