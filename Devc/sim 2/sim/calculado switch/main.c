#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int conta, v1, v2, v3;
    printf("digite 1 para soma, 2 para subtracao, 3 para multiplicacao e 4 para divisao\n");
    scanf("%d", &conta);
    
         switch(conta){
         	    case 1: printf("digite o primeiro numeros que voce quer somar\n");
         	            scanf("%d", &v1);
         	            
         	            printf("digite o segundo numero que quer somar\n");
         	            scanf("%d", &v2);
         	            
         	            v3 = v1 + v2;
         	            printf("resultado da soma e %d.\n", v3 );
         	            system("pause");
						 return 0;
						 
						 
				case 2: printf("digite o primeiro numero que voce quer subtrair.\n");
				        scanf("%d", &v1);
				        
				        printf("digite o segundo numero que voce quer subtrair.\n");
				        scanf("%d", &v2);
				        
				        v3 = v1 - v2;
				        
				        printf("resultado da subtracao e %d.", v3);
				        system("pause");
				        return 0;
				
				
				case 3: printf("digite o primeiro numero da multiplicacao.\n");
				        scanf("%d", &v1);
						
						printf("digite o segundo numero da multipicacao.\n");
						scanf("%d", &v2);
						
						v3 = v1 * v2;
						
						printf("resultado da multiplicacao e %d", v3);
						system("pause");
						return 0;
						
						
				case 4: printf("digite o primeiro numero da divisao.\n");
					    scanf("%d", &v1);
					    
					    printf("digite o segundo numero da divisao.\n");
					    scanf("%d", &v2);
					    
					    v3 = v1 / v2;
					    
					    printf("resultado da divisao e %d.\n", v3);
					    system("pause");
					    return 0;
					    
					    
				default: printf("numero invalido seu animal, tente novamento com uma das opcoes validas.\n");
				         system("pause");
						 return 0;}	    
						        
							 
	return 0;}
