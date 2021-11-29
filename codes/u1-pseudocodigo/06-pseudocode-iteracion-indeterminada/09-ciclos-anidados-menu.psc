Algoritmo opciones_de_operaciones
	Definir op, cantidad, i como Entero
	op <- 0
	
	Repetir
		Escribir "Seleccione una opción de menu:"
		Escribir "(1) Generar números consecutivos a partir del 1"
		Escribir "(2) Salir"
		Leer op
		Segun op Hacer
			1:
				Escribir "Cantidad de consecutivos a partir de 1: "
				Leer cantidad
				i <- 1
				Repetir
					Escribir i
					i <- i + 1
				Mientras Que i <= cantidad
			2:
				Escribir "Termina sesión"
			De Otro Modo:
				Escribir "Opción inválida"
		Fin Segun
	Hasta Que op == 2
	
FinAlgoritmo

