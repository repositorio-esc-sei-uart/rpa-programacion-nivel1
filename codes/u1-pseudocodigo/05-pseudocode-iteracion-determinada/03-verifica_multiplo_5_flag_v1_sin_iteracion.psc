Algoritmo multiplo5_flag
	
	Definir n1, n2, n3 como Entero
	Definir multiplo5 como Logico
	multiplo5 <- Falso // inicialización: no se encontro ninguno
	Leer n1
	Si (n1 mod 5) == 0 Entonces
		multiplo5 <- Verdadero  // se encontro multiplo de 5
	Fin Si
	Leer n2
	Si (n2 mod 5) == 0 Entonces
		multiplo5 <- Verdadero  // se encontro multiplo de 5
	Fin Si
	Leer n3
	Si (n3 mod 5) == 0 Entonces
		multiplo5 <- Verdadero  // se encontro multiplo de 5
	Fin Si
	//...más numeros
	
	Escribir "Ingresó algún nro múltiplo de 5? ", multiplo5
	
FinAlgoritmo
