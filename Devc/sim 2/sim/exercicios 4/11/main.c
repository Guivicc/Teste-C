#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	const int linha = 5, coluna = 5;
	
	int mat1[linha][coluna], i, j;
	
	// preencendo a matriz
	
	for(i=0;i<linha;i++)
		for(j=0;j<coluna;j++)
		mat1[i][j] = rand() %100;
	
	//impressao da matriz
	printf("matriz\n");
	for(i=0;i<linha;i++){
		printf("\n");
			for(j=0;j<coluna;j++)
				printf("%d ", mat1[i][j]);
		}
	printf("\ndiagonal principal:");
	
	for(i=0;i<linha;i++){
		printf("%d ", mat1[i][i]);
	}	
		
		
	return 0;
}
