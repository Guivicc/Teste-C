#include <stdio.h>
#include <stdlib.h>
#include <float.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float mes[12], tempmax = -110.0, tempmin = 99.0;
	int i, M=12, caso1, caso2;
	
	//coleta de informção
	for(i=0; i<M;i++){
	
		printf("digite a temperatura do mes %d.\n",i+1);
		scanf("%f", &mes[i]);
		}
	//maior e menor temperatura 	
	for(i=0; i<M; i++){
		if(mes[i] > tempmax){
			tempmax = mes[i];
			caso1 = i + 1;
			}
		if(mes[i] < tempmin){
			tempmin = mes[i];
			caso2 = i + 1;
			}
		
	
	}
	switch (caso1){  case 1:printf("a maior temperatura foi em janeiro %.2f",tempmax);
				    break;
				    
				    case 2:printf("a maior temperatura foi em fevereiro %.2f",tempmax);
				    break;
				    
				    case 3:printf("a maior temperatura foi em março %.2f",tempmax);
				    break;
				    
				    case 4:printf("a maior temperatura foi em abril %.2f",tempmax);
				    break;
				    
				    case 5:printf("a maior temperatura foi em maio %.2f",tempmax);
				    break;
				    
				    case 6:printf("a maior temperatura foi em junho %.2f",tempmax);
				    break;
				    
				    case 7:printf("a maior temperatura foi em julho %.2f",tempmax);
				    break;
				    
				    case 8:printf("a maior temperatura foi em agosto %.2f",tempmax);
				    break;
				    
				    case 9:printf("a maior temperatura foi em setembro %.2f",tempmax);
				    break;
				    
				    case 10:printf("a maior temperatura foi em outubro %.2f",tempmax);
				    break;
				    
				    case 11:printf("a maior temperatura foi em novembro %.2f",tempmax);
				    break;
				    
				    case 12:printf("a maior temperatura foi em dezembro %.2f",tempmax);
				    break;
				    }
	printf("\n");			    
				    
	switch(caso2){	case 1:printf("a menor temperatura foi em janeiro %.2f",tempmin);
				    break;
					
					case 2:printf("a menor temperatura foi em fevereiro %.2f",tempmin);
				    break;
					
					case 3:printf("a menor temperatura foi em março %.2f",tempmin);
				    break;
					
					case 4:printf("a menor temperatura foi em abril %.2f",tempmin);
				    break;
					
					case 5:printf("a menor temperatura foi em maio %.2f",tempmin);
				    break;
					
					case 6:printf("a menor temperatura foi em junho %.2f",tempmin);
				    break;
					
					case 7:printf("a menor temperatura foi em julho %.2f",tempmin);
				    break;
					
					case 8:printf("a menor temperatura foi em agosto %.2f",tempmin);
				    break;
					
					case 9:printf("a menor temperatura foi em setembro %.2f",tempmin);
				    break;
					
					case 10:printf("a menor temperatura foi em outubro %.2f",tempmin);
				    break;
				    
					case 11:printf("a menor temperatura foi em novembro %.2f",tempmin);
				    break;
					
					case 12:printf("a menor temperatura foi em dezembro %.2f",tempmin);
				    break;			    
					}
	return 0;
}
