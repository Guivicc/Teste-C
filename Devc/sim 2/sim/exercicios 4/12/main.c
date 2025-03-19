#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	
	const int linha = 7, coluna = 7;
	
	int i, j, mat1[linha][coluna];
	
	//criando matriz
	
	for(i=0;i<linha;i++)
		for(j=0;j<coluna;j++)
			mat1[i][j] = rand() %100;
	
	//imprimindo
	printf("matriz");		
	for(i=0;i<linha;i++){
		printf("\n");
		for(j=0;j<coluna;j++)
			printf("%.2d ", mat1[i][j]);
	}
	
	//fazendo diagonal secundaria
	j=0;
	printf("\ndiagonal secundaria:");
	for(i= linha - 1; i>=0;i--){
		printf("%.2d ", mat1[j][i]);
		j= j + 1;
	}
	
	return 0;
}
