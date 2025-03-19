#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale(LC_ALL,"portuguese");
	
	int divis;
	
	printf("informe o numero que deseja dividir.\n");
	scanf("%d", &divis);
	
	if(divis % 2 == 0)printf("é divisivel por 2.\n");
	if(divis % 3 == 0)printf("é divisivel por 3.\n");
	if(divis % 5 == 0)printf("é divisivel por 5.\n");
	else if(divis % 2 != 0 && divis % 3 != 0 && divis % 5 != 0 ) printf("não é divisivel por 2, 3 e 5.\n");
	return 0;
}
