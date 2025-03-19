#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void inverter(int vet[],int tam){
	if(tam==1)
		printf("%d ", vet[tam-1]);
	else{
	 
	 printf("%d ",vet[tam-1]);
	inverter(vet, tam-1); 
	}
}

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	int tam=10;
	int vet[tam], i;
	
	for(i=0;i<tam;i++)
		vet[i] = rand()%100;
	
	printf("vetor em ordem normal.\n");
	
	for(i=0;i<tam;i++)
		printf("%d ", vet[i]);
		
	printf("\nvetor invertido.\n");
	
	inverter(vet, tam);	
		
	return 0;
}
