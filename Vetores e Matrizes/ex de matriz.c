#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int A[3][3], i, j, soma=0, cont;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cont++;
			printf("Digite o %i numero: ",cont);
			scanf("%i",&A[i][j]);
			fflush(stdin);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			soma+=A[i][j];
		}	
	}
	
	printf("\nA soma e: %i\n",soma);
	
	for(i=0;i<3;i++){
		printf("\n|%i %i %i |",A[i][0],A[i][1],A[i][2]);
	}
	
	return 0;
}
