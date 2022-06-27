/*
1.Faça um programa que leia um número, passe este número como parâmetro para uma função que retorne 0 se o número for par ou 1 se o número for ímpar.R.:
*/

#include <stdio.h>

//função
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
