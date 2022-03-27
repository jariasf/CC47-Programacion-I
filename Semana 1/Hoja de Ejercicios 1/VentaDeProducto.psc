Algoritmo VentaDeProducto
  // Entrada de datos
  Escribir "Ingresar el precio de compra:"
  Leer precio_compra

  Escribir "Ingresar el porcentaje de ganancia:"
  Leer porcentaje_ganancia
  
  // Proceso 
  ganancia = precio_compra * porcentaje_ganancia/100
  precio_venta = precio_compra + ganancia

  // Salida
  Escribir "El precio de venta es: ", precio_venta
	
FinAlgoritmo
