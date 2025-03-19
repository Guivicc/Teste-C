#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	
	const int linha = 5, coluna = 4;
	
	int mat1[linha][coluna], mat2[coluna][linha], i, j;
	
	//gerando matriz
	for(i=0;i<linha;i++)
		for(j=0;j<coluna;j++)
			mat1[i][j] = rand() % 100;
			
	//imprimindo matriz
	printf("imprimindo matriz 4x5");
	for(i=0;i<linha;i++){
		printf("\n");
		for(j=0;j<coluna;j++)
			printf("%2d ", mat1[i][j]);
	}
	//convetendo matriz
	for(i=0;i<linha;i++)
		for(j=0;j<coluna;j++)
		mat2[j][i]= mat1[i][j];
		
	//imprimindo segunda matriz
	printf("\nimprimindo matriz 5x4");
	for(i=0;i<coluna;i++){
		printf("\n");
		for(j=0;j<linha;j++)
			printf("%2d ",mat2[i][j]);
		}
	return 0;
}
