#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no *proximo;
}No;

void adicionar_fila(No **fila, int num){
	No *aux, *novo = malloc(sizeof(No));
	if(novo){
		novo->valor = num;
		novo->proximo = NULL;
		if(*fila == NULL)
			*fila = novo;
		else{
			aux = *fila;
			while(aux->proximo)
				aux = aux->proximo;
			aux->proximo = novo;
		
		}
	}
	else
		printf("erro ao alocar memoria");
		
}

void remover_fila(No **fila){
	No *remover = NULL;
	
	if(*fila){
		remover = *fila;
		*fila = remover->proximo;
		printf("valor removido:%d\n", remover->valor);
		free(remover);
	}
	else
		printf("fila vazia!!!\n");
}

//imprimir
void imprimir_fila(No *fila){
	printf("\n-------INICIO DA FILA-------\n");
	while(fila){
		printf("\n%d", fila->valor);
		fila = fila->proximo;
	}
	printf("\n-------FINAL DA FILA--------\n");
}
int main(int argc, char *argv[]) {
	int opcao, num1;
	No *fila = NULL;
	
	do{
		printf("digite 1 para adicionar alguem na fila.\ndigite 2 para remover da fila.\ndigite 3 para mostrar a fila.\ndigite 0 para finalizar.\n");
		scanf("%d", &opcao);
		switch(opcao){
			case 1:
				printf("digite um numero.\n");
				scanf("%d", &num1);
				adicionar_fila(&fila, num1);
				break;
			case 2:
				remover_fila(&fila);
				break;
			case 3:
				imprimir_fila(fila);
				break;
			case 0:
				return 0;
				break;
			default :
				printf("OPCAO INVALIDA!!!.\n");
				break;		
		}
	}while(opcao != 0);
	
	return 0;
}
