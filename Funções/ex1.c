/*
1.Fa�a um programa que leia um n�mero, passe este n�mero como par�metro para uma fun��o que retorne 0 se o n�mero for par ou 1 se o n�mero for �mpar.R.:
*/

#include <stdio.h>

//fun��o
 int impapar(int numero);
 
 int main(void){
 	
 	int numero;
 	
 	printf("Digite um numero: ");
 	scanf("%i",&numero);
 	
 	if(impapar(numero)==0){
 		printf("\no numero e par");
	 }else{
	 	printf("\no numero e impar");
	 }
 	
 	return 0;
 }
 
 int impapar(int numero){
 	if(numero % 2 == 0){
 		return 0;
	 }else{
	 	return 1;
	 }
 }
