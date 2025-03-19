#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int num1, num2, num3;
	
	printf("digite dois digitos\n");
	scanf("%d  %d", &num1, &num2);
	
	printf("valor incial primeiro %d segundo %d.\n",num1, num2);
	
	num3 = num2;
	
	num2 = num1;
	
	num1 = num3;
	
	
	
	printf("após o programa primeiro numero %d segundo numero %d.\n",num1, num2);
	return 0;
}
