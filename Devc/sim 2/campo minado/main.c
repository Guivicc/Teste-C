#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


char jogo[10][10], jogov[10][10];

void bomb(){ //cria as bombas 
	int i, j, k, flag = 0;
	srand(time(NULL));
	
	for(k=0;k<10;k++)
		do{ 
			flag = 0;
			i = rand()% 10;
			j = rand()% 10;
			
			if(jogo[i][j] != '*'){
				jogo[i][j] = '*';
				if(j==9){
					jogo[i][j-1] = 1; flag = 1;
					}
				if(i==9){
					jogo[i-1][j] = 1; flag = 1;
					}	
				if(j==0){
					jogo[i][j+1] = 1; flag = 1;
					}
				if(i==0){
					jogo[i+1][j] = 1; flag = 1;
					}
					jogo[i][j+1] = '1'; flag = 1;
					jogo[i+1][j] = '1';
					jogo[i][j-1] = '1'; 
					jogo[i-1][j] = '1';
					jogo[i+1][j] = '1'; 
					jogo[i][j-1] = '1'; 
					jogo[i-1][j] = '1';
					
				}
		}while(flag == 0);
	
}

void limparv(){//limpa o tabuleiro
	
	int i, j;
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			jogov[i][j] = '?';
		}
	}
}

void limpar(){//limpa o tabuleiro
	
	int i, j;
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			jogo[i][j] = '?';
		}
	}
}

void imprimir(){//imprimi o tabuleiro
	int i, j;
	
	printf("\t  0   1   2   3   4   5   6   7   8   9\n");
	
	for(i=0;i<10;i++){
		printf("\t-----------------------------------------\n");
		printf("\t");
		for(j=0;j<10;j++){
			if(j<1)printf("| %c |",jogov[i][j]);
			else if(j == 9)printf(" %c |    %d",jogov[i][j] ,i);
				else printf(" %c |", jogov[i][j]);
		}
		printf("\n");
	}
	printf("\t-----------------------------------------\n");
}

int play(){
	int linha, coluna, flag = 0, i, j;
	do{ 
		flag = 0;  //flag 
			imprimir();
			printf("digite as cordenadas comecando pela linha\n"); //pedindo cordenada
			scanf("%d%d", &linha, &coluna); //recebendo cordenada
		while(linha < 0 || linha > 9 || coluna < 0 || coluna > 9){   //validando cordenada  
			printf("digite uma cordenada valida!!!\n"); //pedindo cordenada
			scanf("%d%d", &linha, &coluna); //recebendo cordenada
		}
		
			
			if(jogo[linha][coluna] == '*'){
				jogov[linha][coluna] = jogo[linha][coluna];
				imprimir(); //caso seja bomba imprime o tabuleiro
				printf("\nvc perdeu !!!\n"); //avisa que acertou uma bomba
				return 1; //finaliza o while
		}
			else if(jogo[linha][coluna] == '1'){
				jogov[linha][coluna] = jogo[linha][coluna];
				flag = 0;
		}
				else if(jogo[linha][coluna == '?']){
					 		jogo[linha][coluna] = ' ';
					 		jogov[linha][coluna] = jogo[linha][coluna];
							imprimir();
						
							if(jogo[linha][coluna+1] == '?'){
								i = coluna + 2;
								jogo[linha][coluna+1] = ' ';
								jogov[linha][coluna+1] = jogo[linha][coluna+1];
								while(jogo[linha][i] == '?' || i<=9){
									jogo[linha][i] = ' ';
									jogov[linha][i] = jogo[linha][i];
									i++;
								}
								imprimir();
							}
							if(jogo[linha+1][coluna] == '?'){
								i = linha +2;
								jogo[linha+1][coluna] = ' ';
								jogov[linha+1][coluna] = jogo[linha+1][coluna];
									while(jogo[i][coluna] == '?' || i<=9){
										jogo[i][coluna] = ' ';
										jogov[i][coluna] = jogo[i][coluna];
										i++;
									}
								imprimir();
							}
							if(jogo[linha][coluna-1] == '?'){
								i = coluna -2;
								jogo[linha][coluna-1] = ' ';
								jogov[linha][coluna-1] = jogo[linha][coluna-1];
								while(jogo[linha][i] == '?' || i>=0){
									jogo[linha][i] = ' ';
									jogov[linha][i] = jogo[linha][i];
									i--;
								}
								imprimir();
							}
							if(jogo[linha-1][coluna] == '?'){
								i = linha -2;
								jogo[linha-1][coluna] = ' ';
								jogov[linha-1][coluna] = jogo[linha-1][coluna];
									while(jogo[i][coluna] == '?' || i>=0){
										jogo[i][coluna] = ' ';
										jogov[i][coluna] = jogo[i][coluna];
										i--;
									}
								imprimir();
							}
				
			}
	
	}while(flag == 0);
	return 1;
}
int main(int argc, char *argv[]) {
	
	limpar();
	limparv();
	bomb();
	play();
	
	
	system("pause");
	return 0;
}
