#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1[10], num2[10], i, j;
	
	printf("digite 10 numeros.\n");
	for(i= 0; i < 10; i++){
		
		scanf("%d", &num1[i]);
	}
	
	for(i = 0; i < 10; i++){
		num2[i] = num1[i] * num1[i];
		printf("vetor 1 %d e vetor 2 ao quadrado %d.\n", num1[i], num2[i]);
	}
	return 0;
}
