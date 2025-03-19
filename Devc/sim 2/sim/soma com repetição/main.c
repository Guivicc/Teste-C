#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "portoguese");
	
	int soma, i;
	
	soma = 0;
	
	//repetição
	for(i = 1; i <= 100; i++){
		
    //calculo
		soma = soma + i;
		printf("soma %d.\n", soma);
		
	}
	return 0;
}
