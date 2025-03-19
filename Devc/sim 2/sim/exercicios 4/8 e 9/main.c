#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand(time(NULL));
	
	const int linha = 5, coluna = 10;
	
	int mat[linha][coluna], i, j, k, total = 0, linhatotal[linha], colunatotal[coluna];//todas variaveis
	
	//atribuição 
	for(i=0;i<linha;i++)
		for(j=0;j<coluna;j++){
			mat[i][j] = rand() % 1000;
		
		}
		
	//arrumando erro de atribuição de vetor
	for(i=0; i<linha;i++)
		linhatotal[i] = 0;
	
	for(i=0; i<coluna;i++)
		colunatotal[i] = 0;
		
			 		
	//mostrando matriz
	printf("matriz");
	for(i=0;i<linha;i++){
		printf("\n");
		for(j=0;j<coluna;j++){
			printf("%.3d ", mat[i][j]);
		}	
	}
	// calculo total das colunas
	for(i=0; i < coluna ; i++){
		for(j=0; j < linha; j++){
			colunatotal[i] = colunatotal[i] + mat[j][i];
			
		}
	}
	
	//calculo total das linhas
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++)
            linhatotal[i] += mat[i][j];
    	}
	
	//calculo total da matriz
	for(i=0; i < linha;i++){
		for(j=0; j < coluna; j++){
			total= total + mat[i][j];
		}
	}
	
	
	//mostrando o total das colunas
	for(i=0; i<coluna; i++)
		printf("\ncoluna %d teve no total %d.", i+1, colunatotal[i]);
		
	for(i=0; i<linha; i++)
		printf("\nlinha %d teve no total %d", i+1, linhatotal[i]);
	
	
	printf("\ntotal da matriz %d.\n", total);
	
	system("pause");
	
	
	
	
	return 0;
}
