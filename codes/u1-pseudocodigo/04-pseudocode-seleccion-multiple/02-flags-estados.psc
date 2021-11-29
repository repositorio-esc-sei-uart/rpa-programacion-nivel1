Algoritmo Flag_de_estados
	Definir estado Como Entero
	Definir respuesta como Entero
	
	Escribir "Primero registre el estado del libro"
	Escribir "(1) Disponible, (2) Prestado, (3) Perdido"
	Leer estado
	
	Si estado == 1 Entonces
		Escribir "Desea pedir prestado libro? [1]-SI | [otro nro]-NO"
		Leer respuesta
		Si respuesta == 1 Entonces
			estado <- 2
		Fin Si
	SiNo
		Si estado == 2 Entonces
			Escribir "Desea devolver libro? [1]-SI | [otro nro]-NO"
			Leer respuesta
			Si respuesta == 1 Entonces
				estado <- 1
			Fin Si
		Fin Si
	Fin Si
	
	Escribir "Estado final del libro: ", estado
	
FinAlgoritmo
