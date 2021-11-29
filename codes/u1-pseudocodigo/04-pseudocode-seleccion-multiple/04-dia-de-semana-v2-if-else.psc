Algoritmo dia_de_la_semana_v2
	Definir dia Como Entero
	Leer dia
	Si dia == 1 Entonces
		Escribir "Lunes"
	SiNo
		Si dia == 2 Entonces
			Escribir "Martes"
		SiNo
			Si dia == 3 Entonces
				Escribir "Miércoles"
			SiNo
				Si dia == 4 Entonces
					Escribir "Jueves"
				SiNo
					Si dia == 5 Entonces
						Escribir "Viernes"
					SiNo
						Si dia == 6 Entonces
							Escribir "Sábado"
						SiNo
							Si dia == 7 Entonces
								Escribir "Domingo"
							Sino
								Escribir "Día no válido"
							Fin Si
						Fin Si					
					Fin Si
				Fin Si			
			Fin Si		
		Fin Si
	Fin Si
FinAlgoritmo
