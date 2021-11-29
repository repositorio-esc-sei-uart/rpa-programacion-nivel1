Algoritmo acumulador_de_productos
	Definir i, n, prod Como Entero
	
	prod = 1
	Para i <- 1 Hasta 4 Con Paso 1 Hacer
		Leer n
		prod <- prod * n
	Fin Para
	Escribir "Calculo de productos sucesivos: ", prod
FinAlgoritmo

