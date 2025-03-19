#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float calc_imc(float peso, float altura){
	float altura_calc, imc;
	
	altura_calc = altura * altura;
	
	return imc = peso / altura_calc;
	
}


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	float peso, altura, imc;
	
	//coleta de informação
	printf("digite o peso em KG.\n");
	scanf("%f", &peso);
	
	printf("digite a altura em METROS.\n");
	scanf("%f", &altura);
	
	//calculo por função 
	
	imc = calc_imc(peso, altura);
	
	//comparação
	
	if(imc <= 18.5)printf("seu imc é %f e você esta abaixo do peso.\n", imc);
	else if(imc > 18.6 && imc <= 25.0)printf("seu imc é %f e você esta no peso normal.\n", imc);
	else if(imc >25.0 && imc <=30.0)printf("seu imc é %f e você esta com sobre peso.\n", imc);
	else if(imc > 30.0 && imc <= 35.0)printf("seu imc é %f e você esta com obesidade grau 1.\n", imc);
	else if(imc > 35.0 && imc <=40.0)printf("seu imc é %f e você esta com obesidade grau 2.\n", imc);
	else if(imc > 40.0)printf("seu imc é %f e você esta com obesidade grau 3.\n", imc);
	return 0;
}
