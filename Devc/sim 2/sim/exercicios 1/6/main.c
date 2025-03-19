#include <stdio.h>
#include <stdlib.h>

float conver(float real){
	return (float)real / 5.30;

}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float real, dollar;
	
	printf("informe a quantidade de reais que deseja converter.\n");
	scanf("%f", &real);
	
	dollar = conver(real);
	
	printf("convercao sai %.2f.", dollar);
	return 0;
}
