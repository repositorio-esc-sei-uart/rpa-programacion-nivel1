Algoritmo verifica_multiplo_5
	
	Definir i, n Como Entero
	Definir multiplo5 como Logico // variable bandera
	
	multiplo5 <- Falso  // bandera baja
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		
		Leer n
		Si (n mod 5) == 0 Entonces
			//existe al menos un nro multiplo de 5
			multiplo5 <- Verdadero  // bandera alta
		Fin Si
		
	Fin Para
	
	Escribir "Ingresó algún nro múltiplo de 5? ", multiplo5
	
FinAlgoritmo

