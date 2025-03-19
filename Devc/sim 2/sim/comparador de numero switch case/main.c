#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1, num2, r;
	
	printf("digite o primeiro numero para comparar.\n");
	scanf("%d", &num1);
	
	printf("digite o segundo numero para comparar.\n");
	scanf("%d", &num2);
	
	if (num1 > num2) { r = 1;}
	
	else if (num1 < num2) { r = 2;}
	
	else { r = 3;}
	
	
	switch(r){
	
	        
			case 1: printf("o %d e maior.\n", num1); 
			break;
			
			case 2: printf("o %d e maior.\n", num2); 
			break;
				
			case 3: printf("os dois numeros sao iguais.\n"); 
			
			break;}	
            
				

	system("pause");				
	return 0;
}
