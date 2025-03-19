#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int M = 10;
	int num1[M], copia = 9, i, j= 9, num2[M];
	
	printf("digite 10 numeros inteiros.\n");
	for(i=0; i<M; i++)scanf("%d", &num1[i]);
	
	do{
	printf("\n\n=====================================================================================\n\n");
	printf("digite 1 para escrever o vetor na ordem do inicio ao fim\ndigite 2 para escrever o vetor na ordem de fim ao inicia\ndigite 0 para fechar o programa.\n");
	printf("\n========================================================================================\n\n");
	scanf("%d", &copia);
	

	
	switch(copia){	case 1: printf("vetor em ordem inicio a fim.\n");
							for(i=0;i<M;i++) printf("%d ", num1[i]);
							break;
							
				  	case 2: printf("vetor em ordem inversa.\n");
					  	for(i=0; i<M;i++){
				  			num2[i] = num1[j];
				  			j--;
					  		}	
					  	for(i=0;i<M;i++){printf("%d ",num2[i]);
					  	    }
					case 0: printf("finalizando.\n");
					 }}while(copia != 0);
	
	
	
						  
	
						

	return 0;
}
