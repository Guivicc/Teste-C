#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int num[4], i, p = 0, n = 0;
	
	printf("digite 5 numeros.\n");
	scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
	
	for(i=0; i < 5; i++){
		if(num[i] < 0)printf("numero %d é negativo.\n", num[i]), n++;
		else if(num[i] >= 0)printf("numero %d é positivo.\n", num[i]), p++;
	}
	
	printf("o total de numeros negativos %d.\n", n);
	printf("total de numeros positivos %d.\n", p);
	
	
	return 0;
}
