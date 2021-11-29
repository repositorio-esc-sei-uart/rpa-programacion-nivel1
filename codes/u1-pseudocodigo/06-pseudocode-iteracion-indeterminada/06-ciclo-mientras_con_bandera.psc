Algoritmo no_vocales
	
	Definir car como Caracter
	Definir esvocal como Logico
	
	esvocal <- Falso // se inicializa bandera baja
	Mientras No esvocal Hacer   // es equivalente: Mientras esvocal==Falso Hacer
		Leer car
		Si car == 'a' O car == 'e' O car == 'i' O car == 'o' O car == 'u' Entonces
			esvocal <- Verdadero  // alerta: bandera alta
		Fin Si
	Fin Mientras
	Escribir "Se ingresó vocal? ", esvocal
	
FinAlgoritmo

