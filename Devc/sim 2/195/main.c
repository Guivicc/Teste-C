#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void multiplo(int *b, int **c, int ***d){
	c = &b;
	d = &c;
	
	printf("\nvalor digitado pelo usuario %d", *b);
	printf("\ndobro:%d", *b * 2);
	printf("\ntriplo:%d",**c * 3);
	printf("\nquadruplo:%d",***d * 4);
}

int main(int argc, char *argv[]) {
	int A, *b, **c, ***d;
	
	printf("digite um numero.");
	scanf("%d", &A);
	
	b = &A;
	c = &b;
	d = &c;
	
	printf("\nvalor digitado pelo usuario %d", *b);
	printf("\ndobro:%d", *b * 2);
	printf("\ntriplo:%d",**c * 3);
	printf("\nquadruplo:%d",***d * 4);

	return 0;
}
