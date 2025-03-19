#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int v1, v2, v3, v4, R;
	
	printf("informe o 1 numeros inteiros.\n");
	scanf("%d", &v1);
	
	
	printf("informe o 2 numero inteiro.\n");
	scanf("%d", &v2);
	
	
	printf("informe o 3 numero inteiro.\n");
	scanf("%d", &v3);
	
	
    printf("informe o 4 numero inteiro.\n");
	scanf("%d", &v4);
	
	
	R = v1 + v2 + v3 + v4;
	printf("a soma dos 4 nuemros e %d.\n", R);
	system("pause");
	
	return 0;
}
