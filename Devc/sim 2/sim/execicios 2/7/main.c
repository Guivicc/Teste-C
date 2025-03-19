#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char escolha;
	
	printf("digite uma tecla.\n");
	scanf("%c", &escolha);
	
	if(escolha == 'a' || escolha == 'e' || escolha == 'i' || escolha == 'o' || escolha == 'u' || 
	   escolha == 'A' || escolha == 'E' || escolha == 'I' || escolha == 'O' || escolha == 'U'){
	    printf ("%c é uma vogal.\n", escolha);
		}
	else printf("é uma consoante.\n");
	
	return 0;
}
