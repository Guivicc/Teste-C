#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char jogo[3][3];

void setgame(){
	int i, j;
	for(i=0;i<3;i++){
		for(j=0; j<3;j++)
			jogo[i][j]= ' ';
	}	
}

void imprimirjogo(){
	int i, j;
	
	printf("\t  0   1    2");
	for(i=0;i<3;i++){
		
		if(i>0)printf("\n\t-------------");
		printf("\n");
			for(j=0;j<3;j++){
			if(j==0)printf("\t");
			if(j==2)printf(" %c %d", jogo[i][j], i);
			else printf("  %c |", jogo[i][j]);
		
		}
	}
}

int winlinha(){
	int i, j;
	
	for(i=0;i<3;i++){
			if(jogo[i][0] == 'X' && jogo[i][1] == 'X' && jogo[i][2] == 'X'){
				printf("\nX ganhou na linha %d!!!", i);
				return 1;
			}
			if(jogo[i][0] == 'O' && jogo[i][1] == 'O' && jogo[i][2] == 'O'){
				printf("\nO ganhou na linha %d!!!", i);
				return 1;
			}
	}
	return 0 ;
}

int wincoluna(){
	int j;
	for(j=0;j<3;j++){
		if(jogo[0][j] == 'X' && jogo[1][j] == 'X' && jogo[2][j] == 'X'){
				printf("\nX ganhou na coluna %d!!!", j);
				return 1;
		}
		if(jogo[0][j] == 'O' && jogo[1][j] == 'O' && jogo[2][j] == 'O'){
				printf("\nO ganhou na coluna %d!!!", j);
				return 1;	
		}

	}
	return 0;
}

int windiagonal(){
	if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X'){
		printf("\nX ganhou na diagonal principal!!!");
		return 1;
	}
	if(jogo[0][0] == 'O' && jogo[1][1] == 'O' && jogo[2][2] == 'O'){
		printf("\nO ganehou na diagonal princial!!!");
		return 1;
	}
	if(jogo[2][0] == 'X' && jogo[1][1] == 'X' && jogo[0][2] == 'X'){
		printf("\nX ganhou na diagonal secundaria!!!");
		return 1;
	}
	if(jogo[2][0] == 'O' && jogo[1][1] == 'O' && jogo[0][2] == 'O'){
		printf("\nO ganehou na diagonal secundaria!!!");
		return 1;
	}
	return 0;
}


int main(int argc, char *argv[]) {
	
	int l, c, flag = 0 , gameover = 0, jogador = 1, limite = 1;
	
	setgame();
	
	imprimirjogo();

	do{
		do{
		
		
	
	flag = 0; //flag de jogada valida
			
	printf("\ndigite a cordenada de linha depois coluna.\n");
	scanf("%d%d", &l, &c);
	
	if(c<0||c>2){flag++;
		printf("digte uma cordenada de coluna valida!!!\n");
	}
	if(l<0||l>2){flag++;
		printf("digte uma cordenada de linha valida!!!\n");
	}
	if(jogo[l][c] != ' '){flag++;
		printf("cordenada ja foi jogada, digite uma cordenada vazia.\n");
	}
	fflush(stdin);
	}while(flag != 0 ||);  //validação de jogada ^

	//marcando na matriz e verificando ganhador
 	if(jogador == 1){
 		jogo[l][c]= 'X';
 		jogador = 2;
	 }
	else{
		jogo[l][c] = 'O';
		jogador = 1;
	}
		
 	imprimirjogo();
 
 	gameover = wincoluna() ||  winlinha() || windiagonal();
 	limite++;
	}while(gameover != 1);
	

	return 0;
}
