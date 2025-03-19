#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//numeros padroes
#define tamnome 100
#define tamcontatomax 50
// agenda de aniversario

//struct com nome da pesssoa e aniversario



typedef struct{
	char nome[tamnome];
	int dia, mes, ano;
}agenda;

void imprimir(agenda **c, int quant){
	int i;
	printf("\tLista de contatos.\n");
	printf("-----------------------------------------------------\n");
	for(i=0;i<quant;i++){
		printf("\tnumero%d  nome:%s.    Data:%2d/%2d/%4d.\n", i+1, c[i]->nome, c[i]->dia, c[i]->mes, c[i]->ano);
	}
	
	printf("\n-----------------------------------------------------\n");
}

int cadastrar_contato(agenda **c, int quant){  //criar um contato novo
	
	if(quant<tamcontatomax){
		agenda *novo = malloc(sizeof(agenda));
		
		printf("digite o nome do novo contato.\n");  //coleta do nome
		scanf("%99[^\n]", novo->nome);
		getchar();
		
		printf("digite a data de nascimento ex: dd mm aaaa.\n");
		scanf("%d %d %d", &novo->dia, &novo->mes, &novo->ano);
		getchar();
		c[quant] = novo;
		
		return quant + 1;	
	}
	
	else{
		printf("Agenda LOTADA!!!");
		return quant;
		
	}	
} //fim do cadastro de contato

void alterar_contato(agenda **c, int quant){ //alteração de contato
	int id;
	
	imprimir(c, quant);
	printf("digite o numero do contato que deseja alterar.\n");
	scanf("%d", &id);
	getchar();
	
	//alterando
	printf("digite o novo nome da posicao %d\n", id);
	scanf("%99[^\n]", c[id-1]->nome);
	getchar();
	
	
	printf("digite a nova data da posicao %d\n", id);
	scanf(" %d %d %d", &c[id-1]->dia, &c[id-1]->mes, &c[id-1]->ano);
	getchar();
}

void salvar(agenda **c, int quant, const char* arc){
	FILE *file = fopen(arc, "w");
	int i;
	
	if(file){
		fprintf(file,"numero de contatos salvos:%d\n", quant);
		
		for(i=0;i<quant;i++){
			fprintf(file,"contato numero:%d\n", i+1);
			fprintf(file,"Nome:%s\n", c[i]->nome);
			fprintf(file,"Data:%d/%d/%d\n", c[i]->dia, c[i]->mes, c[i]->ano);
		}
	fclose(file);		
	}
	else
		printf("ERRRO ao ABRIR/CRIAR arquivo");
}	// finaliza o salvamento do arquivo

int abrir(agenda **c, const char* arq){
	FILE *file = fopen(arq, "r");
	int quant = 0, i;
	agenda *novo = malloc(sizeof(agenda));
	if(file){
		fscanf(file, "numero de contatos salvos:%d\n", &quant);
		for(i=0;i<tamcontatomax;i++){
			fscanf(file, "contato numero:%d\n", &i);
			fscanf(file, "Nome:%s\n", novo->nome);
			fscanf(file, "Data:%d/%d/%d\n", &novo->dia, &novo->mes, &novo->ano);
			c[i] = novo;
			novo = malloc(sizeof(agenda));
		}
		
	}
	
	else
		printf("erro ao abrir arquivo\n");
		
	return quant;	
}
int main(int argc, char *argv[]) {
	
	
	agenda *contatos[tamcontatomax]; //chamada da struct
	int tam = tamcontatomax, quant = 0;	//tamanho maximo da struct e quantidade de contatos salvos
	const char* arquivo = ("agenda.txt");
	int n;
	
	quant = abrir(contatos, arquivo);
	//swtich case parao menu
	do{
		printf("digite 1 para criar um contato novo.\ndigite 2 para ver a agenda.\ndigite 3 para alterar algum contato.\ndigite 4 para salvar.\ndigite 0 para sair.\n");
		scanf("%d", &n);
		getchar();
			if(n != 1 && n != 2 && n != 3 && n != 4 && n != 0)
				printf("numero invalido!!!\n");
				
		
	switch(n){
				case 1://criar um contato novo
					quant += cadastrar_contato(contatos, quant);
				
					break;
				
				
				case 2: //mostrar agenda
					imprimir(contatos, quant);
					break;
				
				case 3://alterar contato
				
					alterar_contato(contatos, quant);
					
					
					break;
					
				case 4:
					salvar(contatos, quant, arquivo);
					break;
					
				case 0: //finalizar
	
					break;
				
	
	}
	
	}while(n != 0);
		
	
	
	return 0;
}
