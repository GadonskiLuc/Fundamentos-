/*Construa  um  algoritmo  que  leia  uma  matriz quadrada  de  ordem  3.  
Leia  uma constante  K, diminuia  diagonal  principal  por  esta  constante  
e  imprima  a  matriz subtraida.*/
#include <stdio.h> 
#include <math.h> 

#define TAM 3

int main (void){

	int a[TAM][TAM], i, j, k;
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("Escreva A[%i][%i]: ",i+1,j+1);
			scanf("%i",&a[i][j]);
			fflush(stdin);
		} 	
	}
	
	printf("Digite a constante K: ");
	scanf("%i",&k);
	fflush(stdin);
	
	for(i=0;i<TAM;i++){
			a[i][i]=(a[i][i])-k; 	
	} 
	printf("\nA=\n");
	for(i=0;i<TAM;i++){
		printf("| %i %i %i |\n",a[i][0], a[i][1], a[i][2]);
	}  
	
    return 0;
}

