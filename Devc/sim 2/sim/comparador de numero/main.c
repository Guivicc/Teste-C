#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1, num2;
	
	
	printf("digite o primeiro numero para comparar.\n");
	scanf("%d", &num1);
	
	printf("digite o segundo numero para comparar.\n");
	scanf("%d", &num2);
	
	if (num1 > num2) {
	                    printf("o %d e maior.\n", num1);
					   }
    else if (num1 < num2) {printf("o %d e maior.\n", num2);}
    
    else {printf("os dois numeros sao iguais.\n");
	}

	
	system("pause");
	
	return 0;
}
