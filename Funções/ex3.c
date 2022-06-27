#include <stdio.h>
#include <stdlib.h>

int opcaoA(float S, int a, int b);

int opcaoB(float S, int a, int b);

int opcaoC(float S, int a, int b);

int opcaoD(float S, int a, int b);

int main(void){
	
	char op;
	int a, b;
	float S;
	
	do{
		//system("cls");
		printf("\n[ a ]  S = 1/1 + 3/2 + 5/3+........+ 99/50\n");
		printf("[ b ] S = 1/1 -2/2 + 3/3 -..........-10/10\n");
		printf("[ c ] S = 1000/1 -997/2 + 994/3.........\n");
		printf("[ d ] S = 480/10 -475/11 + 470/12 -.......\n");
		printf("[ f ] FIM\n");
		printf("escolha uma opcao:");
		scanf("%c",&op);
		fflush(stdin);
		
		switch(op){
			case 'a':
				S=1;
				a=1;
				b=1;
				opcaoA(S,a,b);
				
			break;
			
			case 'b':
				S=1;
				a=1;
				b=1;
				opcaoB(S,a,b);
				
			break;
			
			case 'c':
				S=1;
				a=1000;
				b=1;
				opcaoC(S,a,b);
				
			break;
			
			case 'd':
				S=1;
				a=480;
				b=10;
				opcaoD(S,a,b);
				
			break;
			
			case 'f':
				printf("vlw flw");
			break;
			default:
				printf("entrada invalida");
		}
		
	}while(op!='f');
		
	return 0;
}

int opcaoA(float S, int a, int b){
	int i;
	
	printf("\nS=");
	
	for(i=0; i<50; i++){
		printf(" %i/%i +",a,b);
		S+=(float)a/b;
		a+=2;
		b+=1;
		
	}
	printf("\n\nS=%.1f\n",S);
}
int opcaoB(float S, int a, int b){
	int i;
	
	printf("\nS=");
	
	for(i=0; i<10; i++){
		printf(" %i/%i -",a,b);
		S-=(float)a/b;
		a+=1;
		b+=1;
		
	}
	printf("\n\nS=%.1f\n",S);
}
int opcaoC(float S, int a, int b){
	int i;
	
	printf("\nS=");
	
	for(i=0; i<20; i++){
		printf(" %i/%i -",a,b);
		S-=(float)a/b;
		a-=3;
		b+=1;
		
	}
	printf("\n\nS=%.1f\n",S);
}
int opcaoD(float S, int a, int b){
	int i;
	
	printf("\nS=");
	
	for(i=0; i<20; i++){
		printf(" %i/%i -",a,b);
		S-=(float)a/b;
		a-=5;
		b+=1;
		
	}
	printf("\n\nS=%.1f\n",S);
}
