/*Construa  um  algoritmo  que  leia  duas  matrizes  5x5 
e  gere  uma  terceira  matriz com a subtração dos elementos 
correspondentes de a e b.*/

#include <stdio.h> 
#include <math.h> 

int main (void){

	int a[5][5], b[5][5], c[5][5], i, j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Escreva A[%i][%i]: ",i+1,j+1);
			scanf("%i",&a[i][j]);
			fflush(stdin);
		} 	
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Escreva B[%i][%i]: ",i+1,j+1);
			scanf("%i",&b[i][j]);
			fflush(stdin);
		} 	
	}  
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			c[i][j]=(a[i][j])-(b[i][j]);
		} 	
	} 
	printf("\nA=\n");
	for(i=0;i<5;i++){
		printf("| %i %i %i %i %i |\n",a[i][0], a[i][1], a[i][2], a[i][3], a[i][4]);
	} 
	printf("\nB=\n");
	for(i=0;i<5;i++){
		printf("| %i %i %i %i %i |\n",b[i][0], b[i][1], b[i][2], b[i][3], b[i][4]);
	} 
	printf("\nC=\n");
	for(i=0;i<5;i++){
		printf("| %i %i %i %i %i |\n",c[i][0], c[i][1], c[i][2], c[i][3], c[i][4]);
	} 
    return 0;
}



