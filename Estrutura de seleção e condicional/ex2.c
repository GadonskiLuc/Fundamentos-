//2. Faça um programa que peça um valor e mostre na tela se o valor é positivo ou negativo

#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int v;
	
	printf("Digite um valor: ");
	scanf("%i",&v);
	fflush(stdin);
	
	if(v>0){
		printf("o valor e positivo");
	}else if (v<0){
		printf("o valor e negativo");
	}else{
		printf("o valor e neutro");
	}
	
	return 0;
}
