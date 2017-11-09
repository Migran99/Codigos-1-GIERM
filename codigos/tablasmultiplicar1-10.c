#include <stdio.h>

int main(){
	//Inicializamos las variables
	int tabla, contador; //Variable para los bucles for
	int resultado;    //Variable para guardar el resultado de cada multiplicacion
	
	
	printf("\n---------TABLAS DE MULTIPLICAR DEL 1 AL 10---------\n"); //Mesnaje inicial
	for(tabla = 1; tabla <= 10; tabla++){ //Realizmos un bucle for "Tablas" del 1 al 10
		printf("\n ************** Tabla del %d **************", tabla); //Escribimos que tablas vamos a mostrar
		for(contador=0; contador<= 10; contador++){ //Este bucle te calcula cada tabla multiplicando el numero de la tabla del 0 al 10
			resultado = tabla * contador;
			printf("\n%d * %d = %d", tabla, contador, resultado); //Sacamos cada multiplicacion por pantalla
		}
	}
}
