Algoritmo promedio_alumnos
	
	Definir  alumno, n, nota, suma Como Entero
	Definir promedio como Real
	
	Para alumno <- 1 Hasta 10 Con Paso 1 Hacer
		
		Escribir "ALUMNO ", alumno
		
		suma <- 0  // inicializar sumador
		Para n <- 1 Hasta 3 Con Paso 1 Hacer
			Escribir n, "º nota: "
			Leer nota
			suma <- suma + nota  // suma la siguiente nota
		Fin Para
		promedio <- suma / 3
		Escribir "Promedio de alumno ", alumno,": ", promedio
		
	Fin Para
	
FinAlgoritmo
