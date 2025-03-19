#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//funções
float salario_hr(float salariob){
	return salariob / 2;
}

float salario_bruto(float salariohr, int hr){
	return salariohr * hr;
	}
	
float imposto_f(float salariobruto, float imposto){
	return (imposto / 100)* salariobruto;
}	

float salario_f(float salariobruto, float impostof){
	return salariobruto - impostof;
}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
	
	int hr;
	
	float salariob, imposto, salariohr, salariobruto, impostof, salariof; 
	
	printf("digite o número de horas trabalhadas.\n");
	scanf("%d",&hr);
	
	printf("digite o salário mínimo.\n");
	scanf("%f",&salariob);
	
	imposto = 3;
	//fim da coleta de dados
	
	//conta com funções fora do código
	salariohr = salario_hr(salariob);
	salariobruto = salario_bruto( salariohr, hr);
    impostof = imposto_f(salariobruto, imposto);
	salariof = salario_f(salariobruto, impostof);
	
	printf("o número de horas trabalhadas %d.\n", hr);
	printf("o salário bruto é %2.f.\n", salariobruto);
	printf("o valor cobrado em imposto é %2.f.\n", impostof);
	printf("o valor final liquido é %2.f.\n", salariof);

	system("pause");
	
	
	
	
	return 0;
}
