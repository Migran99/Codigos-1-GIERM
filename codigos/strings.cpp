//Miguel Granero Ramos

#include <stdio.h>

bool compar(char[20], char[20], int);
int calc_long(char[20]);

int main(){

char text1[20];
char text2[20];
printf("Primera palabra: ");
scanf(" %s", &text1);
printf("\nSegunda palabra: ");
scanf(" %s", &text2);
printf("\n%s %s", text1, text2);

int length1 = calc_long(text1);
printf("\n Longitud 1: %d", length1);

int length2 = calc_long(text2);
printf("\n Longitud 2: %d", length2);

/////¿Es subcadena?
if(length1 > length2){
	int x = 0;
	int y = 0;
	
	while(x < length2 && y < length1){
		printf("\n%c",text1[y]);
		printf("\n -- %c",text2[x]);
		if(text2[x] == text1[y]){
			x++;
			y++;
		}
		else{
			y++;
		}
	}
	if(x==length2){
		printf("\nES SUB");
	}
	else{
		printf("\nNO ES SUB");
	}
	
	
}
else if(length1 == length2 && compar(text1, text2, length1)){
	printf("\nES LA MISMA PALABRA");
}
else{
	printf("\nNO ES SUBCADENA");
}
}

int calc_long(char a[20]){
	char i;
	int length = 0;
	do{
	i = a[length];
	if(i != '\0') length++;
	}while(i != '\0');
	
	return length;
}

bool compar(char a[20], char b[20], int x){
	int count = 0;
	for(int i = 0; i<x; i++){
		if(a[i] == b[i]) count++;
	}
	
	if(count == x) return true;
	else return false;
}
