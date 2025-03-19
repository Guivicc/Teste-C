#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[50], b[50], *p1, *p2;
	int i;
	
	printf("digite uma frase com no maximo 50 caracter.\n");
	scanf("%49[^\n]s", a);
	
	p1 = &a;
	p2 = &b;
	
	for(i=0;i<50;i++)
		*(p2 + i) = *(p1 + i);
		
	printf("%s", b);
	
	
	return 0;
}
