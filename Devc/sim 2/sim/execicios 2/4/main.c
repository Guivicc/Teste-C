#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int opcao;
	
	float doll, real;
		
	printf("=========================================================================================================\n\n");
	printf("digite 1 para converter dollar em real.\n");
	printf("digite 2 para converter real em dollar.\n");
	printf("=========================================================================================================\n\n");
	scanf("%d", &opcao);
	
	switch(opcao){
	 case 1:printf("digite a quantidade dollar que deseja converter.\n");
	                     scanf("%f", &doll);
	                     
	                     real = doll * 5.30;
	                     
	                     printf("a conversão de %.2f dollares da %.2f reais, taxa de cambio 5,30.\n", doll, real);
	                     break;
	             
				  case 2:printf("digite a quantidade de reais q deseja converter.\n");
				         scanf("%f", &real);
				         
				         doll = real / 5.30;
				         
				         printf("o a conversao de %.2f reais da %.2f dollares, taxa de cambio 5,30.\n", real, doll);
				         break;
				  
				  default: printf("opção invalida.");
				          break;    
					}
				         
	                     
	return 0;
}
