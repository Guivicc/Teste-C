#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int multi, i, resultado;
	
	
	do{printf("digite um valor maior que 0.\n");
	  scanf("%d", &multi);
	  
	}while(multi <= 0);
	
	printf("tabuada do %d.\n", multi);
	
	for(i = 0; i <= 10; i++){
		resultado = multi * i;
		printf("%d multiplicado %d = %d.\n", multi, i, resultado);
	}
	
	return 0;
}
