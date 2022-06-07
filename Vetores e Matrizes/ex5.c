//Construa um algoritmo que leia um vetor de 15 palavras e mostre-os na ordem inversa.
#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	char pal[50][15];
	int i;
	
	for(i=0;i<15;i++){
		printf("Digite a %i palavra: ",i+1);
		gets(pal[i]);
		fflush(stdin);
	}
	
	for(i=14;i>=0;i--){
		printf("\n%i - %s",i+1,pal[i]);
	}
	
	return 0;
}
