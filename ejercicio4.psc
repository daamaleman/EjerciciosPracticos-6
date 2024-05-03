Proceso ejercicio4
		Definir nEstudiantes, num, nota, suma, prom Como Real;;
		nEstudiantes <- 10;
		suma <- 0;
		Para num <- 1 Hasta nEstudiantes Con Paso 1 Hacer
			Escribir "Ingrese la calificacion del estudiante ", num, ": ";
			Leer nota;
			suma <- suma + nota;
		FinPara
		prom <- suma / nEstudiantes;
		Escribir "El promedio de la seccion es: ", prom;
FinProceso