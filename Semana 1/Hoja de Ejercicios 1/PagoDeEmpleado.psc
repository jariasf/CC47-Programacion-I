Algoritmo PagoDeEmpleado
	
  // Entradas
  Escribir "Ingresar el número de horas:"
  Leer horas
  Escribir "Ingresar la tarifa horaria:"
  Leer tarifa_horaria

  // Proceso 
  sueldo_basico = horas * tarifa_horaria
  bonificacion = sueldo_basico * 0.18
  sueldo_bruto = sueldo_basico + bonificacion
  descuento = sueldo_bruto * 0.12	
  sueldo_neto = sueldo_bruto - descuento

  // Salida
  Escribir "El sueldo básico es: ", sueldo_basico
  Escribir "Bonificación: ", bonificacion
  Escribir "El sueldo bruto es: ", sueldo_bruto
  Escribir "Descuento: ", descuento
  Escribir "El sueldo neto es: ", sueldo_neto	
	
FinAlgoritmo
