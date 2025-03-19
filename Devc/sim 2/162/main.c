#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int maior(int vet[], int tam ,int indice){

	if(tam==0)
		return vet[indice];
		
	else if(vet[tam -1] > vet[indice])
	     return maior(vet, tam-1, tam-1);
	     
			else 
				return maior(vet, tam-1, indice);
		
}
int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	
	int tam = 10;
	int vet[tam], i;
	
	for(i=0; i<tam; i++)
		vet[i] = rand() % 100;

	//imprimindo
	for(i=0; i<tam;i++)
		printf("%d ", vet[i]);
	// recursao 
	
	printf("\no maior valor do vetor e %d\n", maior(vet, tam, 0));
			
		
	system("pause");
		
	return 0;
}
