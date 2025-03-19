#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// struct
typedef struct no{
	int valor;    //valor enviado
	struct no *proximo;  //proximo  da pilha
}No;  //nome do no

//empilhar
No* empilhar(No *pilha, int num){
	No *novo = malloc(sizeof(No)); // alocando memoria para o novo topo da pilha
	
	if(novo){ //confirmaçao de alocação
		novo->valor = num;//novo topo da pilha recebe o fatorial
		novo->proximo = pilha; //trocando o endereço do anterior a pilha
		return novo;//retornar novo no
	}
	
	else
		printf("erro ao alocar memoria e empilhar !!!\n"); //erro ao alocar memoria
	return NULL;//caso o empilhando falhe o resultado é null
}//fim do empilhamento


//desempilhar
No* desempilhar(No **pilha){// criando procedimento
	No *remover = NULL;   // criando um ponteiro que leva para o proximo da pilha, começando em  null
	
	if(*pilha){//confirmando q pilha não esta vazio
		remover = *pilha;//separa o topo da pilha 
		*pilha = remover->proximo; //troca o novo topo da pilha
	}
	
	else
		printf("--------PILHA VAZIA!!!-------\n"); //messagem de fim de pilha
	return remover;
}//fim do processo de desempilhar

void imprimir(No *pilha){
	printf("\n\tPILHA\n"); //estico imprimindo a pilha
	while(pilha){  //while ate nao tem nada empilhado
		printf("\t%d\n", pilha->valor);//emprimindo cada unidade de pilha 
		pilha = pilha->proximo; //movendo o novo topo da pilha
	}//fim do while
	printf("\n"); // estitico
}//fim do emprimir

//calculo
int calculo(int num){  //começo do calculo
	No *remover, *pilha = NULL; //criando uma o remover DENTRO DO PROCESSO CALCULO
	while(num > 1){ //repetição
		pilha = empilhar(pilha, num); // chamando a função empilhar
		num--; //diminunindo ate num = 0 || 1
		}//fim do while
	
	imprimir(pilha); //processo de empremir a pilha 
	
	while(pilha){ // segunda repetição dentro de calculo para desempilhar
		remover = desempilhar(&pilha);//remover recebe o topo da pilha
		num = num * remover->valor; //multiplicação do fatorial
		free(remover); //limpondo memoria 
	}//fim do segundo while
	return num; //resultado
}

int main(int argc, char *argv[]) {
	
	int valor;
	
	printf("digite um valor maior q zero para o fatorial\n"); //pedindo fatorial
	scanf("%d", &valor);//pegando o fatorial
	printf("\tfatorial de %d: %d\n",valor, calculo(valor)); //chamando o processo de calculo e impressão
	return 0;
}
