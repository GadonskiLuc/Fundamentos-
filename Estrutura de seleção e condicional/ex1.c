//1. Faça um programa que peça dois números e imprima o maior deles.

#include <stdio.h>
#include <stdlib.h>

int main(void){

	float n1, n2;

    printf("Digite n1: ");
    scanf("%f",&n1);
    fflush(stdin);
    
    printf("Digite n2: ");
    scanf("%f",&n2);
    fflush(stdin);

	if(n1>n2){
		printf("o maior e %.2f",n1);
	}else if(n1<n2){
		printf("o maior e %.2f",n2);
	}else{
		printf("sao iguais");
	}

    return 0;
}
