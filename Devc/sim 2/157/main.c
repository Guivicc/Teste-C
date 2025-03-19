#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int potencia(int n, int p){
	if(p==0 || n==0)
		return 1;
		
	else
	return n * potencia(n, p-1);
	
}


int main(int argc, char *argv[]) {
	
	int n, p;
	
	
	printf("digite o numero base.\n");
	scanf("%d", &n);
	
	printf("digite a potencia que deseja elevar\n");
	scanf("%d", &p);
	
	printf("%d",potencia(n,p));
	
	return 0;
}
