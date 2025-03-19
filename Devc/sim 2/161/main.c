#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int soma(int vet[], int  tam){

	if(tam==0)
		return 0;
	else return vet[tam - 1] + soma(vet, tam - 1);
}



int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	
	int tam = 5;
	int mat1[tam], i, j;
	
	for(i=0; i<tam; i++)
			mat1[i]= rand() % 100;
			
	for(i=0; i<tam; i++){
		printf("%2d ", mat1[i]);
	}
	
	//recursão
	 
	//somando linhas
	for(i=0; i<tam; i++);
		printf("\na soma do vetor e:%d", soma(mat1, tam));
		
	return 0;
}
