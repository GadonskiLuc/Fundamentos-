//Fa�a um programa que pe�a um n�mero e imprima se o n�mero � par ou �mpar

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
