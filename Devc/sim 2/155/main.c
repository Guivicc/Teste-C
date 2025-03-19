#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//função
int fator(int n){
	if(n == 0 || n == 1)
		return 1;
	else{
		return n * fator(n-1);
	
		
	}
}





//main
int main(int argc, char *argv[]) {
	
	int n, resultado;
	printf("digite o numero que deseja o fatorial.\n");
	scanf("%d", &n);
	
	resultado = fator(n);
	printf("%d", resultado);
	return 0;
}
