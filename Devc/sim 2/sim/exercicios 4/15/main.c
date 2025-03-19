#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	const int linha = 3, coluna = 3;
	char mat1[linha][coluna];
	int i, j, jogadal, jogadac, flag, jogador = 1, flagw = 1, playagain =5;
	
	//deixando a matriz limpa
		
	for(i=0;i<linha;i++)
		for(j=0;j<coluna;j++)
			mat1[i][j] =' ';
			
	//emprimindo o tabuleira 
	printf("\n\n");         //pular linha
	printf("\t 0   1   2 ");  //cordenadas
	for(i=0;i<linha;i++){
		printf("\n");
		if(i>0)printf("\t-----------");  //divisão do tabuleiro
		printf("\n");
		printf("\t");
		for(j=0;j<coluna;j++){
			if(j<2)printf(" %c |", mat1[i][j]);       // impressao do tabuleiro com divisão  
			else printf(" %c  %d", mat1[i][j],i);  //impressao do tabuleiro com cordenadas
		}
	}
	//pedindo jogadas para o usuario
	printf("\n");
	do{ do{  //confirmando jogada valida
			flag = 0;
				printf("\ndigite a cordenadas superior depois a cordenada a direita.\n");
				scanf(" %d %d", &jogadac, &jogadal);
		 
			if(jogadal<0 || jogadal>2){printf("cordenada lateral invalida!!!\n"), flag = 1;}
			if(jogadac<0 || jogadac>2){printf("cordenada superior invalida!!!\n"), flag = 1;}
		
			if(mat1[jogadal][jogadac] != ' '){printf("cordenadas ja usadas!!!"), flag = 1;
			}
	}while(flag!=0);
	
	if(jogador == 1){mat1[jogadal][jogadac] = 'X', jogador = 0;
	}
	else{mat1[jogadal][jogadac] = 'O', jogador = 1;
	}
	
	//imprimindo tabuleiro apos jogada
		printf("\n\n");         //pular linha
	printf("\t 0   1   2 ");  //cordenadas
	for(i=0;i<linha;i++){
		printf("\n");
		if(i>0)printf("\t-----------");  //divisão do tabuleiro
		printf("\n");
		printf("\t");
		for(j=0;j<coluna;j++){
			if(j<2)printf(" %c |", mat1[i][j]);       // impressao do tabuleiro com divisão  
			else printf(" %c  %d", mat1[i][j],i);  //impressao do tabuleiro com cordenadas
		}
	}		//ganhando pela linha 0
		if(mat1[0][0] == 'X' && mat1[0][1] == 'X' && mat1[0][2] == 'X'){flagw = 0, printf("\njogador X ganhou na linha 0.\n");}
		if(mat1[0][0] == 'O' && mat1[0][1] == 'O' && mat1[0][2] == 'O'){flagw = 0, printf("\njogador O ganhou na linha 0.\n");}
		
		//linha 1
		if(mat1[0][1] == 'X' && mat1[1][1] == 'X' && mat1[2][1] == 'X'){flagw = 0; printf("\njogador X ganhou na linha 1\n");}
		if(mat1[0][1] == 'O' && mat1[1][1] == 'O' && mat1[2][1] == 'O'){flagw = 0; printf("\njogador O ganhou na linha 1\n");}
		
		//linha 2
		if(mat1[0][2] == 'X' && mat1[1][2] == 'X' && mat1[2][2] == 'X'){flagw = 0, printf("\njogador X ganhou na linha 2.\n");}
		if(mat1[0][2] == 'O' && mat1[1][2] == 'O' && mat1[2][2] == 'O'){flagw = 0, printf("\njogador O ganhou na linha 2.\n");}
		
		//coluna 0
		if(mat1[0][0] == 'X' && mat1[1][0] == 'X' && mat1[2][0] == 'X'){flagw = 0, printf("\njogador X ganhou na coluna 0.\n");}
		if(mat1[0][0] == 'O' && mat1[1][0] == 'O' && mat1[2][0] == 'O'){flagw = 0, printf("jogador O ganhou na coluna 0.\n");}
		
		//coluna 1
		if(mat1[2][0] == 'X' && mat1[2][1] == 'X' && mat1[2][2] == 'X'){flagw = 0, printf("\njogador X ganhou na coluna 1.\n");}
		if(mat1[2][0] == 'O' && mat1[2][1] == 'O' && mat1[2][2] == 'O'){flagw = 0, printf("jogador O ganhou na coluna 1.\n");}
		
		//coluna 2
		if(mat1[0][2] == 'X' && mat1[1][2] == 'X' && mat1[2][2] == 'X'){flagw = 0, printf("\njogador X ganhou na coluna 2.\n");}
		if(mat1[0][2] == 'O' && mat1[1][2] == 'O' && mat1[2][2] == 'O'){flagw = 0, printf("jogador O ganhou na coluna 2.\n");}
		
		//diagonal principal
		if(mat1[0][0] == 'X' && mat1[1][1] == 'X' && mat1[2][2] == 'X'){flagw = 0, printf("\njogador X ganhou na diagonal principal.\n");}
		if(mat1[0][0] == 'O' && mat1[1][1] == 'O' && mat1[2][2] == 'O'){flagw = 0, printf("\njogador O ganhou na diagonal principal.\n");}
		
		//diagonal secundaria
		if(mat1[0][3] == 'X' && mat1[1][1] == 'X' && mat1[3][0] == 'X'){flagw = 0, printf("\njogador X ganhou na diagonal secundaria.\n");}
		if(mat1[0][3] == 'O' && mat1[1][1] == 'O' && mat1[3][0] == 'O'){flagw = 0, printf("\njogador O ganhou na diagonal secundaria.\n");}
	
		
	}while (flagw != 0);
	

	
	return 0;
}
