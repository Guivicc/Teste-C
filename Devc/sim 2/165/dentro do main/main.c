#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, i=0, j=1, soma;
	
	printf("digite o numero maximo do algoritmo de fibonacci.\n");
	scanf("%d", &n);
	
	printf("0 1 ");
	
	do{
		soma = i + j; 
		printf("%d ", soma);
		if(i>j)
			j = soma;
		
		else i= soma;	
	
	}while(soma<=n);
	
	system("pause");
	return 0;
}
