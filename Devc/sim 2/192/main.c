#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void maior(int *v,int tam){
	int i;
	int pmaior, pmenor;
	
	pmaior =v[0];
	pmenor =v[0];
		
			
	for(i=0;i<tam;i++){
		if(v[i] > pmaior)
			pmaior = v[i];
		
		if(v[i] < pmenor)
			pmenor = v[i];	
			}
	
	printf("%d é o maior numero do vetor\n%d é o menor numero do vetor.\n", pmaior, pmenor);		
}

int main(int argc, char *argv[]) {
	int vet[10], i;
	
	
	srand(time(NULL));
	
	for(i=0;i<10;i++){
		vet[i]= rand()%100;
		printf("%d ", vet[i]);
	}
	
	printf("\n");
	
	maior(vet, 10);
		
	
	return 0;
}
