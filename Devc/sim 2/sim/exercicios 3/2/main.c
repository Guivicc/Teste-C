#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int senha = 123456, confirm;
	
	printf("digite a senha.\n");
	scanf("%d", &confirm);

	do{printf("acesso negado!!!\n");
		printf("digite a senha.\n");
	    scanf("%d", &confirm);
	}while(confirm != senha);
	
	
	printf("acesso permitido.\n");
	return 0;
}
