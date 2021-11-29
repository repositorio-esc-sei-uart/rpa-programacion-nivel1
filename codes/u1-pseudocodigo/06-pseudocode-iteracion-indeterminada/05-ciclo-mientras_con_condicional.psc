Algoritmo numeros_positivos_pares
	Definir num Como Entero

	Escribir "Ingrese valores positivos pares"
	Leer num
	Mientras (num > 0) Y (num mod 2 == 0) Hacer
		Leer num
	Fin Mientras
	Escribir "Ingresó un valor inválido: ", num
FinAlgoritmo

