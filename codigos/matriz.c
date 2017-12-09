#include <stdio.h>
#define height 7
#define width 3
int main(){
	int matrix[width][height];
	int i, j;
	for(j = 0; j < height; j++){
		for(i = 0; i < width; i++){
			if(i > 0 && j > 0){
				matrix[i][j] = matrix[i][j-1] + matrix[i-1][j];	
			}
			else{
				matrix[i][j] = 1;	
				//printf("Initializing [%d][%d]",i,j);	
			}
			printf("%d           ", matrix[i][j]);
		}
		printf("\n\n\n\n");
	}
		
	
}
