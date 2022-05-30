//3. Faça um programa que leia dez números inteiros e calcule a diferença entre o maior e o menor número do conjunto.

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int numero, maior, menor, i;

	for(i=1;i<=10;i++){
		printf("digite o %i numero: ",i);
		scanf("%i",&numero);
		fflush(stdin);
		
		if(i==1){
			maior=numero;
			menor=numero;
		}else{
			if(numero>maior){
				maior=numero;
			}else if(numero<menor){
				menor=numero;
			}
		}
		
	}
	
	printf("a diferenca de %i e %i = %i",maior, menor, maior-menor);
	
	return 0;
}
