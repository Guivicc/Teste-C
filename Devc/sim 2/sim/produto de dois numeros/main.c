#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void operacoes(int n_um1, int n_um2, int *s_oma, int *d_if, int *p_roduto){
	*s_oma = n_um1 + n_um2;
    *d_if = n_um1 - n_um2;
	*p_roduto = n_um1 * n_um2;
}


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int num1, num2, soma, dif, produto;
	
	printf("escreva o primeiro número da conta.\n");
	scanf("%d", &num1);
	
	printf("escreva o segundo numero da conta.\n");
	scanf("%d", &num2);
	
	operacoes(num1, num2, &soma, &dif, &produto);
	
	printf("a soma de %d e %d é %d.\n", num1, num2, soma);
	printf("a diferença entre %d e %d é %d.\n", num1, num2, dif);
	printf("a o produto de %d e %d é %d.\n", num1, num2, produto);
	return 0;
}
