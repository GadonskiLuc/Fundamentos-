//Construa  um  algoritmo  que  leia  duas  matrizes  3x3  e  gere  uma  terceira  matriz com a soma dos elementos correspondentes de a e b
#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int a[3][3], b[3][3], c[3][3], i, j, cont=0;
	
	//matriz A
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cont++;
			printf("digite o %i numero para a matriz A: ",cont);
			scanf("%i",&a[i][j]);
			fflush(stdin);
		}
	}
	cont=0;
	printf("\n\n");
	
	//matriz B
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cont++;
			printf("digite o %i numero para a matriz B: ",cont);
			scanf("%i",&b[i][j]);
			fflush(stdin);
		}
	}
	
	//matriz C
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	//saida
	
	printf("\nA=\n");
	for(i=0;i<3;i++){
			printf("| %i %i %i |\n", a[i][0], a[i][1], a[i][2]);
	}
	printf("\n\n");
	printf("B=\n");
	for(i=0;i<3;i++){
			printf("| %i %i %i |\n", b[i][0], b[i][1], b[i][2]);
	}
	printf("\n\n");
	printf("C=\n");
	for(i=0;i<3;i++){
			printf("| %i %i %i |\n", c[i][0], c[i][1], c[i][2]);
	}
	
	
	return 0;
}
