#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sequencia(int n){
	if(n <= 1)
		return 0;
	else if(n == 2)
			return 1;
				
			else 
				return sequencia(n - 1) + sequencia(n - 2);
	
}

int main(int argc, char *argv[]) {
	int n;
	
	printf("digite o numero da sequencia de fibonacci que deseja saber\n");
	scanf("%d", &n);
	
	printf("%d", sequencia(n));
	return 0;
}
