//2. Fa�a um programa que pe�a dois n�meros inteiros e gere os n�meros pares que est�o no intervalo entre eles.
#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int n1, n2, i;
	
	printf("digite n1: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("digite n2: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	
	if(n1<n2){
		for(i=n1+1; i<n2; i++){
			if(i%2==0){
				printf(" %i",i);
			}
		}
	}else{
		for(i=n1-1; i>n2; i--){
			if(i%2==0){
				printf(" %i",i);
			}
		}
	}
	
	return 0;
}
