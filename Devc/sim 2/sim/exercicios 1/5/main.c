#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void calc(int di_a, float valor_d, float *valor_bruto, float *valor_desc, float *valor_f){
	*valor_bruto = valor_d * di_a;
	*valor_desc = (8.0 / 100) * *valor_bruto;
	*valor_f = *valor_bruto - *valor_desc;
}
//

int main(int argc, char *argv[]) {
	
	int dia;
	float valord, valorbruto, valorf, desconto;
	
	printf("digite a quantidade de dias trabalhados.\n");
	scanf("%d", &dia);
	
	printf("valor da diaria.\n");
	scanf("%f", &valord);
	
	calc(dia, valord, &valorbruto, &desconto, &valorf);
	
	printf("valor bruto e %.2f.\nvalor liquido e %.2f", valorbruto, valorf);
	
	return 0;
}
