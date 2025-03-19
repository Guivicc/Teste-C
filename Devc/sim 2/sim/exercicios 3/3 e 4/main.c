#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int soma, i, tam, code;
	
	printf("digite ate que numero deseja somar os impares.\n");
	scanf("%d", &tam);
	
	for(i=1; i <= tam; i=i+2){soma++; code++;
	}
	
	printf("a soma de todos os numeros impares é %d\ne o programa rodou %d vezes para chegar no resultado.\n", soma, code);
	return 0;
}
