#include <stdio.h>
// função valida data
int ValidaData(int d, int m, int a);

int main (void){

	int D,M,A;
	
	printf("Digite a data (DD/MM/AAAA):");
	scanf("%i%*c%i%*c%i",&D,&M,&A);
	
	printf("Data: %i/%i/%i\n",D,M,A);
	
	if (ValidaData(D,M,A) == 0){
		printf("Data valida\n");
	}else{
		printf("Data invalida\n");
	}    
	getch();
	
	return 0;
	}
	int ValidaData(int d, int m, int a){
		if (a >= 0){
			if (m >= 1 && m <= 12) {
				if (d >= 1 && d <= 31){
					return 0;
				}else{
					return 1;
				}
			}else{
				return 1;
			}
		}else{
			return 1;
		}
		
		}
