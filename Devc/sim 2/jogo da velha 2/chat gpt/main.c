#include <stdio.h>
#include <stdlib.h>

char jogo[3][3];

void setgame(){
    int i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++)
            jogo[i][j] = ' ';
    }    
}

void imprimirjogo(){
    int i, j;
    
    printf("\t  0   1   2\n");
    for(i = 0; i < 3; i++) {
        if(i > 0) printf("\t-------------\n");
        for(j = 0; j < 3; j++) {
            if(j == 0) printf("\t");
            printf(" %c ", jogo[i][j]);
            if(j < 2) printf("|");
        }
        printf("\n");
    }
}

int winlinha() {
    int i;
    for(i = 0; i < 3; i++) {
        if(jogo[i][0] == 'X' && jogo[i][1] == 'X' && jogo[i][2] == 'X') {
            printf("X ganhou na linha %d!!!\n", i);
            return 1;
        }
        if(jogo[i][0] == 'O' && jogo[i][1] == 'O' && jogo[i][2] == 'O') {
            printf("O ganhou na linha %d!!!\n", i);
            return 1;
        }
    }
    return 0;
}

int wincoluna() {
    int j;
    for(j = 0; j < 3; j++) {
        if(jogo[0][j] == 'X' && jogo[1][j] == 'X' && jogo[2][j] == 'X') {
            printf("X ganhou na coluna %d!!!\n", j);
            return 1;
        }
        if(jogo[0][j] == 'O' && jogo[1][j] == 'O' && jogo[2][j] == 'O') {
            printf("O ganhou na coluna %d!!!\n", j);
            return 1;
        }
    }
    return 0;
}

int windiagonal() {
    // Verificando diagonal principal
    if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X') {
        printf("X ganhou na diagonal principal!!!\n");
        return 1;
    }
    if(jogo[0][0] == 'O' && jogo[1][1] == 'O' && jogo[2][2] == 'O') {
        printf("O ganhou na diagonal principal!!!\n");
        return 1;
    }

    // Verificando diagonal secundária
    if(jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X') {
        printf("X ganhou na diagonal secundária!!!\n");
        return 1;
    }
    if(jogo[0][2] == 'O' && jogo[1][1] == 'O' && jogo[2][0] == 'O') {
        printf("O ganhou na diagonal secundária!!!\n");
        return 1;
    }
    
    return 0;
}

int main(int argc, char *argv[]) {
    int l, c, flag = 0, gameover = 0, jogador = 1;
    
    setgame();
    imprimirjogo();

    do {
        do {
            flag = 0; //flag de jogada válida
            
            printf("\nDigite a coordenada de linha e depois coluna.\n");
            scanf("%d%d", &l, &c);
            
            if(c < 0 || c > 2) {
                flag++;
                printf("Digite uma coordenada de coluna válida!!!\n");
            }
            if(l < 0 || l > 2) {
                flag++;
                printf("Digite uma coordenada de linha válida!!!\n");
            }
            if(jogo[l][c] != ' ') {
                flag++;
                printf("Coordenada já foi jogada, digite uma coordenada vazia.\n");
            }
            fflush(stdin);
        } while(flag != 0);  // Validação de jogada

        // Marcando na matriz e verificando ganhador
        if(jogador == 1) {
            jogo[l][c] = 'X';
            jogador = 2;
        } else {
            jogo[l][c] = 'O';
            jogador = 1;
        }
        
        imprimirjogo();
        
        // Verificar vitória
        gameover = winlinha() || wincoluna() || windiagonal();

    } while(!gameover);

    return 0;
}

