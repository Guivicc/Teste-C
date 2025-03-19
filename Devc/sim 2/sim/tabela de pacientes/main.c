#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define TAM 4


//defina a struct antes do codigo pq n sei
struct tipo_pessoa{
	int idade;
	float peso, altura;
	char nome[50];
};

//typedef para renomear a struct e deixar o codigo mais limpo
typedef struct tipo_pessoa tipo_pessoa;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	tipo_pessoa lista[TAM];
	
	char busca[50];
	int i, j, flag1=1, ibusca;
	
	for(i=0; i<TAM; i++){
		printf("insira o nome da %d pessoa.\n", i+1);
		scanf("%49[^\n]s", &lista[i].nome);
		fflush(stdin);
		
		printf("digite o peso de %s.\n", lista[i].nome);
		scanf("%f", &lista[i].peso);
		fflush(stdin);
		
		printf("digite a altura de %s\n", lista[i].nome);
		scanf("$f", &lista[i].altura);
		fflush(stdin);
		
		printf("digite a idade de %s\n", lista[i].nome);
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		}
	
	printf("digite o nome que deseja procurar.\n");
	scanf("%49[^\n]s", &busca);
	
	
	for(j=0; j<TAM; j++){
		flag1 = strcmp(busca, lista[j].nome);
		if(flag1 == 0){ibusca = j; break; }
		}
	if(flag1 == 0){printf("nome:%s.\n", lista[ibusca].nome);
	               printf("idade:%d.\n", lista[ibusca].idade);
	               printf("altura:%f.\n", lista[ibusca].altura);
	               printf("peso:%.2f.\n", lista[ibusca].peso); 
	    }
	else{printf("nome não encontrado.\n");
	}    
	
	return 0;
}
