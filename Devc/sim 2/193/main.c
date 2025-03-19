#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void troca(float *a, float *b){

	*a = *b + *a;
	*b = *a - *b;
	*a = *a - *b;
}
int main(int argc, char *argv[]) {
	float a, b;
	float *p1, *p2;
	
	a = 2.7;
	b = 7.4;
	p1 = &a;
	p2 = &b;
	
	printf("valor de A:%.2f\nvalor de B:%.2f\n", a, b);
	
	troca(p1, p2);
	
	printf("apos a troca.");
	printf("\nvalor de A:%.2f\nvalor de B:%.2f\n", a, b);
	return 0;
}
