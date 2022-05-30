//5. Faça um programa que peça um número e informe se o número é inteiro ou quebrado

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float n;
	
	printf("digite um numero: ");
	scanf("%f",&n);
	fflush(stdin);
	
	if(n==(int)n){
		printf("o numero e inteiro");
	}else{
		printf("o numero e quebrado");
	}
	
	return 0;
}
