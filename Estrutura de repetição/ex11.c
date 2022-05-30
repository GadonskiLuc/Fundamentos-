//11. Faça um programa que mostre a soma desta serie S= 1/1 + 2/3 + 3/5+ 4/7+5/9+..+10/19.
#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int soma, divisor=0, dividendo=0, i;
	
	for(i=1;i<=10;i++){
		dividendo+=1;
		divisor+=2;
		
		printf("%i/%i\n",dividendo,divisor);
		
	}
	
	return 0;
}

