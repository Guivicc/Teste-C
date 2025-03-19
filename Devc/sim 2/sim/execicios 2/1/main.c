#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1, num2, num3;
	
	printf("digite tres valores.\n");
	scanf("%d%d%d", &num1, &num2, &num3);
	
	if(num1 > num2 && num1 >num3)printf("primeiro numero é maior %d.\n", num1);  // comparação de mairoes linha13 a 15
	else if(num2 > num1 && num2 >num3)printf("o segundo numero é maior %d.\n", num2);
	     else if(num3 > num1 && num3 >num2)printf("o terceiro numero é maior %d.\n", num3);	
 	
   //numeros iguais  
	if(num1 == num2 && num2 == num3)printf("todos os numeros são iguais %d %d %d", num1, num2, num3);
	else if(num1 == num2)printf("o primeiro e o segundo numeros são iguais %d %d.\n", num1, num2);
	else if(num1 == num3)printf("o primeiro e o terceiro numero são iguais %d %d.\n", num1, num3);
	else if(num2 == num3)printf("o segundo numero e o terceiro são iguais %d %d.", num2, num3);
	
	return 0;
}
