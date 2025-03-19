#include <stdio.h>
#include <stdlib.h>

//struct
typedef struct no{
	int idade;
	struct no *proximo;
	
}NO;

//adicionar a fila
void adicionar_fila(NO **fila, int idade){
	NO *aux, *novo = malloc(sizeof(NO));

	if(novo){// verificando alocaão de memoria
		novo->idade = idade;
		novo->proximo = NULL;
		if(*fila == NULL){ 
			*fila = novo;
		}
		else{
			aux = *fila;
			while(aux->proximo)
				aux = aux->proximo;
				aux->proximo = novo;
		}	
	
	}	
	else
		printf("erro ao alocar memoria!!!\n");

}

//emprimir a fila
void emprimir(NO *fila){
	NO *aux;
	int i = 0;
	aux = fila;
	

	printf("\n------------Inicio da fila------------\n");

		while(aux){
			i++;
			printf("lugar na fila:%d idade:%d\n", i, aux->idade);
			aux = aux->proximo;
		}
		
	printf("\n------------------Fim da fila-------------------\n");
	
}

//remover da pilha
void remover_fila(NO**fila){
	NO *remover, aux;
	
	if(*fila){
		remover = *fila;
		if(remover->proximo)
			*fila = remover->proximo;
		printf("%d removido\n", remover->idade);
		
		
			
	}
	else
		printf("FILA VAZIA!\n");


}

//adicionar a fila de prioridades
void adicionar_fila_prioridade(NO **fila, int idade){
	NO *aux, *novo = malloc(sizeof(NO));
	aux = *fila;

	if(novo){//teste de alocaão de memoria
		novo->idade = idade;
		novo->proximo = NULL;
		if(novo->idade > 59){//é prioridade de fato ?
			if((*fila)->idade <= 59){ //pq fila esta entre ()
				novo->proximo = *fila;
				*fila = novo;
			}
			else{
				while(aux->proximo && aux->idade <= 59)
					aux= aux->proximo;
				novo->proximo = aux->proximo;
				aux->proximo = novo;
			}
			}
		else{//caso n seja prioridade
			while(aux->proximo)
				aux = aux->proximo;
				aux->proximo = novo;
		}
			
	}
	else
		printf("erro ao alocar memoria para prioridade!!!\n");
}



int main(int argc, char *argv[]) {
	int opcao, idade;
	NO *fila = NULL;
	
	
	do{
		printf("digite 1 para entrar na fila.\ndigite 2 para sair da fila.\ndigite 3 para entrar na fila com prioridade.\ndigite 4 para mostrar a fila.\ndigite 0 para sair.\n");
		scanf("%d", &opcao);
	
		switch(opcao){
			case 1://adiconar a fila normal
				printf("digite a idade\n");
				scanf("%d", &idade);
				adicionar_fila(&fila, idade);
				break;
			case 2://remover da fila
				remover_fila(&fila);
				break;
			case 3://adicionar a fila de prioridade
				printf("digite a idade.\n");
				scanf("%d", &idade);
				adicionar_fila_prioridade(&fila, idade);
				break;
			case 4:
				emprimir(fila);
				break;	
			case 0:
				break;
			default:
				break;			
		}
		
	}while(opcao!=0);
	
	
	
	return 0;
}
