Algoritmo flags
	
	Definir espar Como Logico
	Definir num como Entero
	
	espar <- Falso
	
	Escribir "Ingrese un número"
	
	Leer num
	
	Si (num mod 2) == 0 Entonces
		espar <- Verdadero
	SiNo
		espar <- Falso
	Fin Si
	
	Escribir num, " es par? Respuesta: ", espar
	
FinAlgoritmo
