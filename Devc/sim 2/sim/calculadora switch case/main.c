#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int calculo;
	
	float n1, n2, r;
	
	printf("escreva 1 para fazer soma, 2 para subtracao, 3 divisao e 4 multiplicacao.\n");
	scanf("%d", &calculo);
	
	switch(calculo){
	 
	
	                case 1: printf("escreva o primeiro numero.\n");
	                        scanf("%f", &n1);
	                        
	                        printf("escreva o segundo numero.\n");
	                        scanf("%f", &n2);
					
					        r = n1 + n2; 
					       
						    printf("o resultado da soma de %f e %f e igual %f.\n", n1, n2, r);
						    break;
				
				    
					
					case 2: printf("escreva o primeiro numero.\n");
	                        scanf("%f", &n1);
	                        
	                        printf("escreva o segundo numero.\n");
	                        scanf("%f", &n2);
							
							r = n1 - n2;
							
							printf("o resultado da subtracao de %f e %f e igual %f.\n", n1, n2, r);
							break;
							
					
					
					
					case 3: printf("escreva o primeiro numero.\n");
	                        scanf("%f", &n1);
	                        
	                        printf("escreva o segundo numero.\n");
	                        scanf("%f", &n2);
							
							if (n2 == 0){printf("resultado da divisao e 0.\n");
							break;}			    
						    
						    
						   else r = n1 / n2;
						    
						    printf("o resultado da divisao de %f e %f e igual %f.\n", n1, n2, r);
						    break;
						    
					
						    
				    case 4: printf("escreva o primeiro numero.\n");
	                        scanf("%f", &n1);
	                        
	                        printf("escreva o segundo numero.\n");
	                        scanf("%f", &n2);		    
	                        
	                        
						
	                        r = n1 * n2;
	                        
	                        printf("o resultado da multiplicacao de %f e %f e igual %f.\n", n1, n2, r);
	                        break;}
	
	system("pause");                       
						    
						    
						    
	return 0;
}
