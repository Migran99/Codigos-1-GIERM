#include <stdio.h>


//INICIALIZAMOS VARIABLES
int i = 0; 	//Variable contador para saber cuantos numero llevamos introducidos
float suma = 0; //Va a ir llevando la suma de todos los numeros para hacer la media
float media;	//Variable de salida
float input;	//Variable para leer los valores de entrada

int main(){
	//Realizamos una primera introduccion de datos
	printf("\nIntroduce un numero: ");
	scanf("%f", &input);
	//Si este bucle while se repetira hasta que introduzcamos un numero negativo
	while(input >= 0){
		i++; //Sumamos uno al contador
		suma += input; //Actualizamos la suma
		//Volvemos a pedir otro numero
		printf("El numero introducido no es negativo. Ya llevamos %d numero(s).\n", i);
		printf("\nIntroduce otro numero: ");
		scanf("%f", &input);
	}
	
	//Hacemos la media teniendo en cuenta que si el primer numero era negativo la media sera cero
	if(i > 0) media = suma/i;
	else media = 0;
	
	//Sacamos la media por pantalla
	printf("\nLa media de todos los numero hasta el primer negativo es: %f", media);
}
