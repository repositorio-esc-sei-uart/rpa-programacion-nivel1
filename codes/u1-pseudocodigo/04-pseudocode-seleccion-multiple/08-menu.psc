Algoritmo Menu
	Definir opcion1, opcion2 como Entero
	opcion1 <- 0 // inicializacion
	opcion2 <- 0 // inicializacion
	Escribir "Menu Principal: Seleccione un número de opción:"
	Escribir "(1) Cargar planilla"
	Escribir "(2) Modificar planilla"
	Escribir "(3) Eliminar planilla"
	Leer opcion1
	Segun opcion1 Hacer
		1:	Escribir "Planilla cargada"
		2:
			Escribir "Submenú Modificar planilla:"
			Escribir "(21) Modificar nombre y apellido"
			Escribir "(22) Modificar legajo"
			Escribir "(23) Modificar notas"
			Leer opcion2
			Segun opcion2 Hacer
				21:	Escribir "Nombre y apellido modificado"
				22:	Escribir "Legajo modificado"
				23:	Escribir "Notas modificadas"
				De Otro Modo:
					Escribir "Modificacion cancelada"
			Fin Segun
		3:
			Escribir "Planilla eliminada"
		De Otro Modo:
			Escribir "Sesion terminada"
	Fin Segun
FinAlgoritmo
