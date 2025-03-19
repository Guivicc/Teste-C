#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	float fabr, imp, imptt, lucro, lucrott, custo;
	
	
	//coleta de inforamção
	
	printf("digite o valor de fabricação do produto.\n");
	scanf("%f", &fabr);
    fflush;
    
	
	
	printf("digite o valor de imposto do produto.\n");
	scanf("%f", &imp);
	fflush;
	
	
	printf("digite o valor do lucro.\n");
	scanf("%f", &lucro);
	fflush;
	
	//calculos
   imptt = (imp/100)* fabr;
   lucrott = (lucro/100)*fabr;
   custo = imptt + lucrott+ fabr; 

	
	printf("valor do custo de fabricação %.2f.\n",fabr);
	printf("valor do imposto %.2f.\n",imptt);
	printf("valor do lucro %.2f.\n",lucrott);
	printf("valor total %.2f.",custo);
	
	system("pause");
 	return 0;
}
