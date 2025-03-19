#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void divis(float valor_t, float  *valor_g, float *valor_divis, int pe_ssoas){
	*valor_g = *valor_g / (float)100 * valor_t;
	*valor_divis = (valor_t + *valor_g)/ pe_ssoas;
	
}
           
int main(int argc, char *argv[]) {
	
	float valort, valorg, valordivs;
	int pessoas;
	
	printf("insira o valor total da conta.\n");
	scanf("%f", &valort);
	
	printf("insira o quantos e a gorjeta");
	scanf("%f", &valorg);
	
	printf("insira quantas pessoas vao pagar a conta.\n");
	scanf("%d", &pessoas);
	
	divis(valort, &valorg, &valordivs, pessoas);
	
	printf("valor que cada um deve pagar e %f.\n", valordivs);
	
	
	return 0;
}
