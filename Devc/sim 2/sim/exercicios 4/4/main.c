#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/* 4) Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
diferentes. O vendedor recebe um sal�rio de R$1100,00 acrescido de 5% do valor total de suas
vendas. O valor unit�rio dos objetos deve ser informado e armazenado em um vetor; a quantidade
vendida de cada objeto deve ficar em outro vetor, mas na mesma posi��o. Crie um programa que
receba os pre�os e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
determine e mostre:
a) A quantidade vendida, valor unit�rio e valor total de cada objeto. Ao final, dever�o ser mostrados
o valor total das vendas e o valor da comiss�o que ser� paga ao vendedor.
b) O valor do objeto mais vendido e sua posi��o no vetor (em caso de empates mostre todos
empatados). */


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int M=10;
	int i, j, vendas[M], topvendas = 0;
	float valor[M], valortotal = 0, vendedor;
	for(i=0; i<M; i++){
		printf("digite o n�mero de vendas do %d produto.\n", i+1);
		scanf("%d", &vendas[i]);
		
		printf("digite o valor do produto %d.\n", i+1);
		scanf("%f", &valor[i]);
	}
	
	for(i=0; i<M;i++){
		if(vendas[i] > topvendas)topvendas = i;
		valor[i]= valor[i] * vendas[i];
		valortotal+ valor[i];
		
		
	}
	
	vendedor = (valortotal * 0.05);
	
	
	for(i=0; i<M;i++){
		printf("produto %.3d vendeu %.3d unidades no valor %.2f.\n", i+1, vendas[i], valor[i]);
	}		
	
	printf("a comiss�o do vendedor � %f", vendedor);
	printf("o produto mais vendido foi o %d", topvendas);
	
	
	return 0;
}
