/*
2.Fa�a  uma  fun��o  que  desenhe  linhas  de  caracteres  na  tela,  a  fun��o receber� como argumento o tipo de caractere e o n�mero de linhas que dever� imprimir.
*/
#include <stdio.h>

//fun��o
int imprime(char caractere, int linha);

int main (void){
	
	int linha;
	char caractere;
	
	printf("Digite o numero de linhas: ");
	scanf("%i",&linha);
	fflush(stdin);
	
	printf("Digite qual caractere: ");
	scanf("%c",&caractere);
	fflush(stdin);
	
	imprime(caractere,linha);
	getch();
	
	return 0;
}

int imprime(char caractere, int linha){
	
	int i, j;
	
	for(i = 0; i<linha; i++){
		for(j=0; j<15; j++){
			printf("%c \t ", caractere);
		}
	}
	
}
