#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	
	const int linha = 4, coluna = 4;
	
	int i, j, mat1[linha][coluna];
	
	//criando matriz
	for(i=0;i<linha;i++)
		for(j=0;j<coluna;j++)
			mat1[i][j] = rand() % 1000;
		
		
		//imprimindo matriz	
		printf("matriz.\n");
	for(i=0;i<linha;i++){
		printf("\n");
		for(j=0;j<coluna;j++)
		printf("%3d ", mat1[i][j]);
	}
	
	//achando a diagonal principal
	printf("\nnumero abaixo da diagonal princiapal:");
	for(i=0;i<linha ;i++){
		for(j=0;j<coluna;j++){
			if(i>j)printf("%3d ",mat1[i][j]);
		}
		
		 
	}
	return 0;
}








/*
	printf("\nnumero abaixo da diagonal princiapal:");
	for(i=0;i<linha -1;i++){
		 printf("%3d ",mat1[i+1][i]);
	} 
	
*/

