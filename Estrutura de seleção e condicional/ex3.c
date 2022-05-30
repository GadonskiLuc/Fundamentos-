//Faça um programa que peça um número e imprima se o número é par ou ímpar

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int n;
	
	printf("digite um numero: ");
	scanf("%i",&n);
	fflush(stdin);
	
	if(n%2==0){
		printf("o numero e par");
	}else{
		printf("o numero e impar");
	}

	return 0;
}
