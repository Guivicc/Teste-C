#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, i, resultado;
	
	printf("digite um numero.\n");
	scanf("%d", &n);
	printf("todos os numeros pares ao quadrado.\n");
	for(i = 1; i <= n; i++){
	     if (i % 2 == 0){
		 resultado = i * i;
		
		printf("o quadrado de %d e %d.\n",i ,resultado); 
		}
	}
	return 0;
}
