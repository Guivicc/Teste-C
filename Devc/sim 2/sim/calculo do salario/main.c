#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fun��es
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
	
	printf("digite o n�mero de horas trabalhadas.\n");
	scanf("%d",&hr);
	
	printf("digite o sal�rio m�nimo.\n");
	scanf("%f",&salariob);
	
	imposto = 3;
	//fim da coleta de dados
	
	//conta com fun��es fora do c�digo
	salariohr = salario_hr(salariob);
	salariobruto = salario_bruto( salariohr, hr);
    impostof = imposto_f(salariobruto, imposto);
	salariof = salario_f(salariobruto, impostof);
	
	printf("o n�mero de horas trabalhadas %d.\n", hr);
	printf("o sal�rio bruto � %2.f.\n", salariobruto);
	printf("o valor cobrado em imposto � %2.f.\n", impostof);
	printf("o valor final liquido � %2.f.\n", salariof);

	system("pause");
	
	
	
	
	return 0;
}
