Algoritmo el_mayor
	Definir a, b, c Como Entero
	
	Escribir "Ingrese tres numeros enteros: "
	Leer a, b, c
	Si (a > b) Y (a > c) Entonces  
		Escribir a, " el es mayor"
	SiNo
		Si b > c Entonces		
			Escribir b, " el es mayor"
		SiNo
			Escribir c, " el es mayor"
		Fin Si
	Fin Si
	
FinAlgoritmo
