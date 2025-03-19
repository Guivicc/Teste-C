#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b;
	
	printf("escrava 2 numeros.\n");
	scanf("%d %d", &a, &b);
	
	printf("o primeiro numero e %d o segundo numero e %d.\n", a ,b);
	printf("apos a operacao\n");
 // 	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("primeiro numero %d e segundo numero %d.\n", a, b);
	return 0;
}
