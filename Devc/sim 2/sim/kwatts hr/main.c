#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


float wat_real(float salariom){
	return 1000/salariom;
}
float total_pago(float watsreal, float watsgasto){
	return watsreal * watsgasto;
}
float des_conto(float totalpago){
	return 15.0 / 100 * totalpago;
}
float real_desconto(float desconto, float totalpago){
	return totalpago - desconto;
}




int main(int argc, char *argv[]) {
setlocale(LC_ALL, "portuguese");

float salariom, watsreal, watsgasto, totalpago, desconto, realdesconto;

printf("insira o salario minimo.\n");
scanf("%f", &salariom);

printf("insira a quantia de kw gastos.\n");
scanf("%f", &watsgasto);

watsreal = wat_real(salariom);
totalpago = total_pago(watsgasto,watsreal);
desconto = des_conto(totalpago);
realdesconto= real_desconto(desconto, totalpago);


printf("valor de 1 KW é %.2f R$\n", watsreal);
printf("o total a ser pago é %.2f R$.\n",totalpago);
printf("o desconto é %.2f R$.\n", desconto);
printf("o valor total com desonto é %.2f R$.\n", realdesconto);
	
system("pause");
	
	
	return 0;
}
