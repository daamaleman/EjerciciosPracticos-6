Proceso ejercicio5
		Dimension cal[8];
		Definir sum, aprob, reprob, i, cal Como Entero;
		Definir prom Como Real;
		
		sum <- 0;
		aprob <- 0;
		reprob <- 0;
		
		Para i <- 0 Hasta 7 Con Paso 1 Hacer
			Escribir "Ingrese la calificacion para el estudiante ", i+1, ": ";
			Leer cal[i];
			sum <- sum + cal[i];
			
			Si cal[i] >= 70 Entonces
				aprob <- aprob + 1;
			Sino
				reprob <- reprob + 1;
			FinSi
		FinPara
		
		prom <- sum / 8;
		
		Escribir "El promedio general del grupo es: ", prom;
		Escribir "La cantidad de estudiantes aprobados es: ", aprob;
		Escribir "La cantidad de estudiantes reprobados es: ", reprob;
FinProceso