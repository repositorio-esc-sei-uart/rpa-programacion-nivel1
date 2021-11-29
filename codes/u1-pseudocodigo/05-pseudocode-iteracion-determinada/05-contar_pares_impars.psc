Algoritmo contar_pares_impares
	Definir i, n, num, contpar, contimpar Como Entero
	Escribir "Cantidad de numeros a ingresar: "
	Leer n
	Si n > 0 Entonces  // verifica que la cantidad sea positiva para procesar
		contpar <- 0  // inicializar contador de pares
		contimpar <- 0  // inicializar contador de impares
		Para i<-1 Hasta n Con Paso 1 Hacer
			Escribir i, "º Numero:"
			Leer num
			Si (num mod 2) == 0 Entonces
				contpar <- contpar + 1  // contar el siguiente par
			SiNo
				contimpar <- contimpar + 1  // contar el siguiente impar
			Fin Si
		Fin Para
		
		Escribir "Números pares ingresados: ", contpar
		Escribir "Números impares ingresados: ", contimpar
	SiNo
		Escribir "cantidad no válida"
	Fin Si
	
FinAlgoritmo
