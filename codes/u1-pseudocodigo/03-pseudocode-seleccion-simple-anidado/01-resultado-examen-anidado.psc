Algoritmo examen
	
	Definir nota1, nota2, nota3 Como Entero
	Definir promedio como Real
	
	Leer nota1, nota2, nota3
	promedio <- (nota1 + nota2 + nota3) / 3
	
	Escribir "promedio: ", promedio
	
//	Si promedio >= 7 Entonces
//		Escribir "promociona"
//	SiNo
//		Si promedio >= 4 Entonces
//			Escribir "regulariza"
//		SiNo
//			Escribir "libre"
//		Fin Si
//	Fin Si
	
	Si promedio < 4 Entonces
		Escribir "libre"
	SiNo
		Si promedio < 7 Entonces
			Escribir "regular"
		SiNo
			Escribir "promocionado"
		Fin Si
	Fin Si
	
FinAlgoritmo
