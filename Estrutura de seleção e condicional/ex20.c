//20. Faça um programa que peça uma data no formato dd/mm/aaaa e determine se a mesma é uma data válida. Consistências: Ano maior que zero. Mês entre 1 e 12. Meses com 30 e 31 dias. Mês com 28 ou 29 dias.
#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int d,m,a;
	
	printf("digite um dia: ");
	scanf("%i",&d);
	fflush(stdin);
	printf("digite um mes: ");
	scanf("%i",&m);
	fflush(stdin);
	printf("digite um ano: ");
	scanf("%i",&a);
	fflush(stdin);
	
	if(a<0){
		printf("data invalida");
	}
	if(m<=0 || m>12){
		printf("data invalida");
	}
	if(d<=0 || d>31){
		printf("data invalida");
	}
	if(m==4 || m==6 || m==9 || m==11 && d>30){
		printf("data invalida");
	}
	if(m==2 && d>28){
		printf("data invalida");
	}
	if(a%4==0 && m==2 && d>29){
		printf("data invalida");
	}else{
		printf("\n%i/%i/%i, data valida",d,m,a);
	}

	return 0;
}
