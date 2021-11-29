Algoritmo casos_similares
	
	Definir opcion1 Como Caracter
	
	Leer opcion1
	Segun opcion1 Hacer
		'/','*', '+', '-':
			Escribir "Ud ingresó un operador matemático"
		'0','1', '2', '3','4','5', '6', '7','8','9':
			Escribir "Ud ingresó un digito"
		De Otro Modo:
			Escribir "Ud ingresó un caracter no valido"
	Fin Segun
FinAlgoritmo
