Algoritmo AreaDeTerreno
	
  // Entrada de datos
  Escribir "Ingresar el lado A:";
  Leer A;
  Escribir "Ingresar el lado B:";
  Leer B;
  Escribir "Ingresar el lado C:";
  Leer C;

  // Proceso 
  area_cuadrado = B * C;
  area_triangulo = B * (A - C)/2;
  area_total = area_cuadrado + area_triangulo;

  // Salida
  Escribir "El área del terreno es: ", area_total;
	
FinAlgoritmo
