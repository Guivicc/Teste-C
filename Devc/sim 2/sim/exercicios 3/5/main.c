#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	float num1, num2, resultado;
	
	printf("digite a primeira nota.\n");
    scanf("%f", &num1);
	
	while(num1 > 10 || num1 < 0){
		printf("primeira nota invalida!!!\ndigite novamente:");
		scanf("%f", &num1);
	}
	
	printf("digite a segunda nota.\n");
	scanf("%f", &num2);
	
	while(num2 > 10 || num2 < 0){
	    printf("segunda nota invalida!!!\ndigite novamente:\n");
		scanf("%f", &num2);
	}
	
	resultado = (num1 + num2) / 2;
	
	printf("a media e %.2f.\n", resultado);
	
	return 0;
}
