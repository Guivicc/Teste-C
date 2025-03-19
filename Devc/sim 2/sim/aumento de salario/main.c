#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float aumento, perc, sal, salt;
	
	printf("digite o valor do salario do funcionario.\n");
	scanf("%f", &sal);
	
	printf("digite o aumento em porcentagem.\n");
	scanf("%f", &perc);
	
	
	aumento = perc / 100 * sal;
    salt = sal + aumento; 
	
	printf ("o aumento de salario sera de %f.\n", aumento);
	printf ("o valor total do salario sera %f\n", salt);
	system("pause");
	return 0;
}
