Algoritmo problema_que_no_admite_segun
	Definir nota1, nota2, nota3 Como Entero
	Definir promedio como Real
	
	Leer nota1, nota2, nota3
	promedio <- (nota1 + nota2 + nota3) / 3
	
	Segun promedio Hacer
		>=7:
			Escribir "promociona"
		>= 4 Y <7:
			Escribir "regulariza"
		De Otro Modo:
			Escribir "libre"
	Fin Segun
FinAlgoritmo
