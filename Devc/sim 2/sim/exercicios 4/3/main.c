#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int M = 20;
	
	int num1[M], num2[M], i, j = M ;
	
	for(i = 0; i < M; i++){
	
		printf("digite o numeros da posição %d.\n", i+1);
		scanf("%d", &num1[i]);
		}
	
		//inverção
		for(i = 0; i < M; i++){
		j--;
		num2[j] = num1[i];
		}
		
		for(i=0; i<M; i++)printf("valor inicial %d valor apos inversao %d\n", num1[i], num2[i]);
		
	return 0;
}
