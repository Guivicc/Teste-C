#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void imprimir(int *v,int tam){
	int i;
	printf("\nimprimindo fora do main\nvetor:");
	for(i=0;i<tam;i++)
		printf("%d ", *(v + i));
}

int main(int argc, char *argv[]) {
	int vetor[10], i;

	srand(time(NULL));
	
	for(i=0; i<10;i++)
		vetor[i] = rand()%100;
		
	printf("imprimindo dentro do main\nvetor:")	;
	for(i=0;i<10;i++)
		printf("%d ", vetor[i]);	
		
	imprimir(vetor, 10)	;
	
	return 0;
}
