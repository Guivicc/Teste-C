#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int M=100;
	int vet1[M], copia, contador = 0, i, flag = 0;
	srand(time(NULL));
	
	//atribuição
	for(i=0;i<M;i++)
		vet1[i] = rand();
	
	//impressão
	printf("ordem de geração.\n");
	for(i=0;i<M;i++)
		printf("%.5d ", vet1[i]);
	// organização 
	
	do{ flag = 0;
		contador++;
		for(i=0;i<M-1;i++){
			if(vet1[i] > vet1[i+1]){
				copia = vet1[i];
				vet1[i] = vet1[i+1];
				vet1[i+1] = copia;
				flag = 1;
			}
		}
	}while(flag != 0);
	
	printf("\nnumero de vez q for rodou %d\nimpressao apos a ordenacao.\n", contador);
	
	for(i=0;i<M;i++)
		printf("%.5d ", vet1[i]);
	
	
	
	
	
	return 0;
}
