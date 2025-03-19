#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//estrutara para guardar a string
typedef struct palavra{
	char caracter;
	struct palavra *proximo;
}P;

//ABRA A PORTA MARIQUINHA


//empilhar
P* empilhar(P *proximo_pilha, char letra){
	P *novo = malloc(sizeof(P)); //aloca memoria para a struct palavra
	
	if(novo){ //testa alocação de memoria
		novo->caracter = letra;
		novo->proximo = proximo_pilha;
		return novo;	
		}
	
	else{
		printf("erro ao alocar memoria e empilhar!!!");
	}
	return NULL;
}

//desempilhar
P* desempilhar(P **proximo_pilha){
	P *remover = NULL;
	
	if(*proximo_pilha){
		remover = *proximo_pilha;
		*proximo_pilha = remover->proximo;
		return remover;
		
	}
	
		
	else{
		printf("PILHA VAZIA / NULL");
	return NULL;
	}
}

//inverter cada parte de palavra separada por ' '
void inverter_palavra(char letra[]){
	P *remover, *proximo_pilha = NULL;
	int i = 0;
	
	printf("\nfrase invertida:");
	while(letra[i] != '\0'){
		if(letra[i] != ' '){
			proximo_pilha = empilhar(proximo_pilha, letra[i]);
		}
		else{
			while(proximo_pilha){
				remover = desempilhar(&proximo_pilha);
				printf("%c", remover->caracter);
				free(remover);
			}
			
		printf(" ");	
		}
		
	i++;
	}
	
//imprimir a ultima palavra	
		while(proximo_pilha){
			remover = desempilhar(&proximo_pilha);
			printf("%c", remover->caracter);
			free(remover);
		}
		printf("\n");
}


int main(int argc, char *argv[]) {
	char frase_completa[100];
	printf("digite a frase: ");
	scanf("%99[^\n]", &frase_completa);

	printf("frase original:%s\n", frase_completa);
	
	inverter_palavra(frase_completa);
	
	

	return 0;
}
