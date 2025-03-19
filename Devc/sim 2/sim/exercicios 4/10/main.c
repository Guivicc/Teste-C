#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	const int linha = 3, coluna = 3;
	
	int mat1[coluna][linha], mat2[coluna][linha], mat3[coluna][linha], i, j;
	
	//preenchindo matriz
	for(i=0;i<linha; i++)
		for(j=0;j<coluna; j++)
			mat1[i][j] = rand ()% 100;
			mat2[i][j] = rand ()% 100;
	for(i=0;i<linha; i++)
		for(j=0;j<coluna; j++)
			mat2[i][j] = rand ()% 100;
		
	//calculo
	for(i=0;i<linha; i++)
		for(j=0;j<coluna; j++)
			mat3[i][j] = mat1[i][j] + mat2[i][j];
	
	//imprimindo matriz
	printf("\nmatriz 1\n");
	for(i=0;i<linha; i++){
		printf("\n");
		for(j=0;j<coluna; j++)
			printf("%d ", mat1[i][j]);}
	
		printf("\nmatriz 2\n");
		
	for(i=0;i<linha; i++){
		printf("\n");
		for(j=0;j<coluna; j++)
			printf("%d ", mat2[i][j]);}
			
		printf("\nmatriz 3\n");
		
	for(i=0;i<linha; i++){
		printf("\n");
		for(j=0;j<coluna; j++)
			printf("%d ", mat3[i][j]);}		

	return 0;
}
