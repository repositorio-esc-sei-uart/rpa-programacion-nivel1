Algoritmo descomponer
	Definir i, num Como Entero
	Leer num
	Si num>999 Y num<10000 Entonces
		Escribir "Unidad: ", num mod 10
		num <- trunc(num / 10)  // num <- num / 10
		Escribir "Decena: ", num mod 10
		num <- trunc(num / 10)
		Escribir "Centena: ", num mod 10
		num <- trunc(num / 10)
		Escribir "Unidad de mil: ", num mod 10
	SiNo
		Escribir "NO ingreso un valor de 4 digitos"
	Fin Si
FinAlgoritmo


