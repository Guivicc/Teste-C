#include <stdio.h>
#include <stdlib.h>

//estruct
typedef struct no{
	char caracter;
	struct no *proximo;
}NO;

//empilhar
NO* empilhar(NO *pilha, char c){
	NO *novo = malloc(sizeof(NO));
	
	if(novo){
		novo->caracter = c;
		novo->proximo  = pilha;
		return novo;
	}
	else
		printf("erro ao alocar memoria!!!");
	return NULL;
}//fim de processo para empilhar

//desempilhar
NO* desempilhar(NO **pilha){
	NO *remover = NULL;
	if(pilha){
		remover = *pilha;
		*pilha = remover->proximo;
	}
	return remover;
}//fim do desempilhar

//imprimir
void imprimir(NO *pilha){
	printf("\tPILHA\n");
	while(pilha){
		printf("\t%c\n", pilha->caracter);
		pilha = pilha->proximo;
	}
	
}

//formar par
int formar_par(char f, char a){
	
	if(a == f)
		return 0; //1 = expressao correta
	
	else 
		return 1; //zero = errada
		
}

//valindando informação
int validando_informacao(char s[50]){ //percorre a string atraz de {} [] ()    //duvida    
	int i = 0;
	NO *remover, *pilha = NULL;                                      //duvida oq estou criando exatamente nessa linha ?
	while(s[i]!='\0'){
		if(s[i] == '{' || s[i] == '[' || s[i] == '('){
			pilha = empilhar(pilha, s[i]);
		}
		else if(s[i] == '}' || s[i] == ']' || s[i] == ')'){
			remover = desempilhar(&pilha);           //pq essa pilha tem &
			if(formar_par(s[i], remover->caracter) == 0){
				printf("expressao mal formada!!!\n");
				return 1;
			}
			free(remover);
		}	
		i++;	
	}
	imprimir(pilha);
	if(pilha){
		printf("\nEXPRESSAO MAL FORMADA!\n");
		return 1;
	}
	else{
		printf("\nexpressao correta!!!\n");
		return 0;
	}
}//fim de validando informacao


int main(int argc, char *argv[]) {
	char exp[50];
	
	printf("digite a expressao matematica.\n");
	scanf("%49[^\n]", exp);
	printf("\nExpressao: %s\nretorno:%d", exp, validando_informacao(exp));
	
	
	
	return 0;
}
