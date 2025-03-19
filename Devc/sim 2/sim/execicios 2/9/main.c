#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int escolha, i;
	float n[3], media = 0;
	
	
	
	printf("=================================================================================\n\n");
	printf("digite 1 para calular a médio normal 1 , digite 2 para média ponderada.\n");
	printf("\n\n=================================================================================\n\n");
	scanf("%d", &escolha);
	
	
	//
	printf("digite as 3 notas do aluno.\n");
	for(i=0; i<3; i++){
		scanf("%f", &n[i]);
	}
	
	switch(escolha){case 1: for(i=0; i<3; i++){ media = media + n[i]; 
	                        }
	                        media = media / 3;
	                        
	                        printf("a média normal é %.2f.\n", media);
	                        break;

	               //case 2
	               case 2: media = media + n[0] * 3; 
	                       media = media + n[1] * 3;
	                       media = media + n[2] * 4;
	                       media = media / 10;
	                       
	                       printf("a média ponderarada é %.2f.\n", media);
	                       break;
	                   }
	return 0;
}
