#include <stdio.h>

int main(){
	FILE *fp; //Declaramos el nombre del archivo en el que vamos a guardar el resultado
	//Inicializamos las variables
	int tabla, contador; //Variable para los bucles for
	int resultado;		//Variable para guardar el resultado de cada multiplicacion
	
	fp = fopen("/tmp/tablas.txt", "a"); //Abrimos o creamos el archivo para guardar el resultado
	
	
	printf("\n---------TABLAS DE MULTIPLICAR DEL 1 AL 10---------\n"); //Mesnaje inicial
	fprintf(fp, "\n---------TABLAS DE MULTIPLICAR DEL 1 AL 10---------\n");
	for(tabla = 1; tabla <= 10; tabla++){ //Realizmos un bucle for "Tablas" del 1 al 10
		printf("\n ************** Tabla del %d **************", tabla); //Escribimos que tablas vamos a mostrar
		fprintf(fp, "\n ************** Tabla del %d **************", tabla);
		for(contador=0; contador<= 10; contador++){ //Este bucle te calcula cada tabla multiplicando el numero de la tabla del 0 al 10
			resultado = tabla * contador;
			printf("\n%d * %d = %d", tabla, contador, resultado); //Sacamos cada multiplicacion por pantalla
			fprintf(fp, "\n%d * %d = %d", tabla, contador, resultado);
		}
	}
	fclose(fp); //Cerramos el archivo
}
