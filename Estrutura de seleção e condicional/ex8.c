//8. Faça um programa que leia 3 valores inteiros e exiba-os em ordem crescente.
#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int n1, n2, n3;
	
	printf("digite n1: ");
	scanf("%i",&n1);
	fflush(stdin);
	
	printf("digite n2: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	printf("digite n3: ");
	scanf("%i",&n3);
	fflush(stdin);
	
	if(n1<n2 && n2<n3){
		printf("%i,%i,%i",n1,n2,n3);
	}else if(n1<n3 && n3<n2){
		printf("%i,%i,%i",n1,n3,n2);
	}else if(n2<n1 && n1<n3){
		printf("%i,%i,%i",n2,n1,n3);
	}else if(n2<n3 && n3<n1){
		printf("%i,%i,%i",n2,n3,n1);
	}else if(n3<n1 && n1<n2){
		printf("%i,%i,%i",n3,n1,n2);
	}else{
		printf("%i,%i,%i",n3,n2,n1);
	}
	
	return 0;
}
