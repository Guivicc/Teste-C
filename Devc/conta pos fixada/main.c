#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no{
	float valor; 
	struct no *proximo;
}NO;

//empilhar
NO* empilhar(NO *pilha, float num){ // criando a função
	NO *novo = malloc(sizeof(NO)); //cria uma variavel novo e alocando memoria local para criar uma nova pilha
	
	if(novo){ //teste de alocaçao de memoria
		novo->valor = num; //novo'varialvel local' recebe o valor
		novo->proximo = pilha; //coloca o novo no TOPO da pilha
		return novo;  //retorna o novo
		
	}
	else
		printf("erro ao alocar memoria!!1"); // erro em caso de alocar memmoria
		return NULL; //em caso de falha returno null
}

//desempilhar
NO* desempilhar(NO **pilha){ //cria a funçao
	NO *remover = NULL; //cria a variavel de PONTEIRO e remover recebe NULL
	
	if(pilha){
		remover = *pilha; //remover recebe o topo da pilha 
		*pilha = remover->proximo; //troca  o endereço de memoria do topo da pilha
		return remover; 
	}
	else
		printf("pilha vazia!!!");
		return NULL;
}

float operacao(float a, float b, char x){
	switch(x){
		case '+':
			return a + b;
			break;
		case '-':
			return a - b;
			break;
		case '*':
			return a * b;
			break;
		case '/':
			return a / b;
			break;
		default:
			return 0.0;
			break;	
		}
	
}


float resolver_expressao(char x[]){
	char *pt;
	float num;
	NO *n1, *n2, *pilha = NULL;
	pt = strtok(x, " ");
	
	while(pt){
		if(pt[0] == '+' || pt[0] == '-' || pt[0] == '/' || pt[0] == '*'){
			n1 = desempilhar(&pilha); // pq o &?
			n2 = desempilhar(&pilha);
			num = operacao(n2->valor, n1->valor, pt[0]);
			pilha = empilhar(pilha, num);
			free(n1);
			free(n2);
		}
		else{
			num = strtol(pt, NULL, 10);
			pilha = empilhar(pilha, num);
		}
		pt = strtok(NULL, " ");
	}
	n1 = desempilhar(&pilha);
	num = n1->valor;
	free(n1);
	return num;

}


int main(int argc, char *argv[]) {
	char conta[100];
	
	printf("digite a conta.\n");
	scanf("%99[^\n]", &conta);
	
	printf("Resultado: %f",resolver_expressao(conta));
	
	
	return 0;
}
