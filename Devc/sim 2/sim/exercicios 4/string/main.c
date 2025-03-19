#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	char palavra[50], palavraconfirm[50], copia[50];
	int i, j = 0, tam, flag;
	
	//coleta da frase
	
	printf("digite a palavra que deseja saber se é palindroma.\n");
	scanf("%50[^\n]", palavra);
	printf("\n");
	
	//tirando espaço para comparar
	
	for(i=0; i<strlen(palavra); i++){
		if
			(palavra[i] == ' ' || palavra[i] == '.' || palavra[i] == '!' || palavra[i] == ',');
		else{
		copia[j] = palavra[i];
		j++;
		}
	}
	printf("\n\n\nstring após tirar os espaços %s\n\n%s\n\n", palavra, copia);
	//verificando se a frase é palindroma

	j = strlen(copia)-1;
	for(i=0;i<strlen(copia);i++){
		palavraconfirm[j] = copia[i];
		j--;
		}
		palavraconfirm[i] = '\0';
	
	
	
	flag = strcmp(copia, palavraconfirm);
	printf("palavra final %s :", palavra);

	
	
	if(flag == 0) printf("é uma frase palindroma.\n");
	
	else printf("não é uma frase palindroma.\n");

	
	
	
	
	
	//programa para palavra.
/*	char palavra[50], palavraconfirm[50];
	int i, j, tam, flag;
	
	printf("digite a palavra que deseja saber se é palindroma.\n");
	scanf("%50[^\n]", palavra);
	printf("\n");
	tam = printf(palavra);
	j = tam -1;
	
	for(i=0;i<tam;i++){
		palavraconfirm[j] = palavra[i];
		j--;
		}
		palavraconfirm[i] = '\0';
	
	flag = strcmp(palavra, palavraconfirm);
	
	if(flag == 0) printf(" é uma palavra palindroma.\n");
	
	else printf(" não é uma palavra palindroma.\n");

*/	
	return 0;
}
