#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int soma(n){
	if(n==0)
		return 0;
		
	else if(n==1)
		return 1;
		
		else return n + soma(n-1);
}



int main(int argc, char *argv[]) {
	
	int n;
	
	printf("digite um numero.\n");
	scanf("%d", &n);
	
	printf("a soma de 1 ate %d e %d.\n", n, soma(n));
	return 0;
}
